#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include "storage-screen.c"
//#include "option-menu.c"

char nameProduct[20];
int qntd;
FILE *storage;
int resposta;

void adicionar(){
	

	
	printf("Digite o produto: ");
	
	scanf("%s", nameProduct);
	
	printf("Digite a quantidade do produto: ");
	
	scanf("%i", &qntd);
	
	
	
	
	
	storage = fopen("Storage.txt", "a+");
	
	fprintf(storage, "%s %i\n" , nameProduct, qntd);
	
	fclose(storage);


	system("cls");
	


	printf("Deseja adicionar outro produto no estoque?\n1-sim\n2-Não\n");

	scanf("%i",&resposta);

	switch(resposta){

		case 1:
			system("cls");
			adicionar();
			break;
		case 2:
			MenuOpcoes();

	}

}

void excluir(){

	char delete[100];

	printf("Digite o produto que deseja excluir: \n");
	scanf("%s", delete);

	storage = fopen("Storage.txt", "r");
	FILE *arqNovo = fopen("notas_novo.txt","w"); // abrir arquivo em modo escrita)


	while(!feof(storage)){

		fscanf(storage, "%s %i\n", nameProduct, &qntd );
		if(strcmp(nameProduct, delete) != 0){

			fprintf(arqNovo, "%s %i\n", nameProduct, qntd);
		}

	}

	fclose(storage);
	fclose(arqNovo);

	system("del Storage.txt");
	system("rename notas_novo.txt Storage.txt");

	printf("Fim da exclusão!\n");

	printf("Deseja excluir outro produto?\n1-sim\n2-Não\n");

	scanf("%i",&resposta);

	switch(resposta){

		case 1:
			system("cls");
			excluir();
			break;
		case 2:
			MenuOpcoes();

	}


}