#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include "storage-screen.c"
//#include "option-menu.c"


void adicionar(){
	
	char nameProduct[20];
	int qntd;
	 

	
	printf("Digite o produto: ");
	
	scanf("%s", nameProduct);
	
	printf("Digite a quantidade do produto: ");
	
	scanf("%i", &qntd);
	
	
	
	FILE *storage;
	
	storage = fopen("Storage.txt", "a+");
	
	fprintf(storage, "%s %i\n" , nameProduct, qntd);
	
	fclose(storage);


	system("cls");
	

	int resposta;

	printf("Deseja adicionar outro produto no estoque?\n1-sim\n2-Não\n");

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

