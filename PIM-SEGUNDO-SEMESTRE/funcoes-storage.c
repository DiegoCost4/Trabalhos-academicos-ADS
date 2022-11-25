#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nameProduct[20];
int qntd;
FILE *storage;
int resposta;


int arquivo_existe(char nmarq[]) {
	FILE* arq = fopen(nmarq, "r");
    if (arq) {
        fclose(arq);
        return 1;
    }
    return 0;
}


void adicionar(){
	
	printf("**************************************\n");
	printf("***************ESTOQUE****************\n");
	printf("**************************************\n\n");
	
	printf("Digite o produto: ");
	
	scanf("%s", nameProduct);
	
	printf("Digite a quantidade do produto: ");
	
	scanf("%i", &qntd);
	
	
	
	storage = fopen("Storage.txt", "a+");
	
	fprintf(storage, "%s %i\n" , nameProduct, qntd);
	
	fclose(storage);



	printf("\nDeseja adicionar outro produto no estoque?\n1-sim\n2-Não\n");

	scanf("%i",&resposta);

	switch(resposta){

		case 1:
			system("cls");
			adicionar();
			break;
		case 2:
			system("cls");
			StorageScreen();

	}

}



void excluir(){

	printf("**************************************\n");
	printf("***************ESTOQUE****************\n");
	printf("**************************************\n\n");


	char delete[100];

	printf("Digite o produto que deseja excluir: \n");
	scanf("%s", delete);

	storage = fopen("Storage.txt", "r");
	FILE *arqNovo = fopen("notas_novo.txt","w");


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

	printf("Fim da exclusão!\n\n");

	printf("Deseja excluir outro produto?\n1-sim\n2-Não\n");

	scanf("%i",&resposta);

	switch(resposta){

		case 1:
			system("cls");
			excluir();
			break;
		case 2:
			system("cls");
			StorageScreen();

	}

}



void listar(){

	printf("**************************************\n");
	printf("***************Estoque****************\n");
	printf("**************************************\n\n");


	if(!arquivo_existe("Storage.txt"))
		return;

	printf("\n\nListagem de Produtos\n\n");

	storage = fopen("Storage.txt", "r");

	printf("|  Quantidade  |    Produto    \n");

	while(!feof(storage)){

		fscanf(storage, "%s %i\n", nameProduct, &qntd);
		printf("|   %-8i   |  %-8s     \n", qntd, nameProduct); 
	}

	fclose(storage);

	printf("Fim da Listagem\n\n");


	printf("1- Estoque\n");
	printf("2- Menu Principal\n\n");
	printf("Digite a opção desejada: ");

	scanf("%i",&resposta);

	switch(resposta){

		case 1:
			system("cls");
			StorageScreen();
			break;
		case 2:
			MenuOpcoes();

	}	

}
