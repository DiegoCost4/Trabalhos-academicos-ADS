#include <stdio.h>
#include <stdlib.h>
#include "funcoes-storage.c"
//#include "Storage-Screen.c"
//#include "option-menu.c"

/*void adicionar(){
	
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
	

	int resposta;

	printf("Deseja adicionar outro produto no estoque?\n 1-sim\n2-Não\n");

	scanf("%i",&resposta);

	switch (resposta)
	{
		case 1:
			//StorageScreen();		 
			break;
		case 2:
			//MenuOpcoes();
			break;
	    default:
			printf("Opção inválida\n\n");
			break;
	
	}

	if(resposta == 's' ){
		StorageScreen();
	}
	else if(resposta == 'n'){
		MenuOpcoes();
	}
	else{

		printf("Resposta invÃ¡lida, digite novamente...\n\n");

		printf("Deseja adicionar outro produto no estoque?(s/n) \n");

		scanf("%s", resposta);
	}

}*/


void StorageScreen(){
	
	printf("**************************************\n");
	printf("***************ESTOQUE****************\n");
	printf("**************************************\n\n");
	
	int opcao = 0;
	
	printf("1- Adicionar\n");
	printf("2- Excluir\n");
	printf("3- Editar\n");
	
	scanf("%i", &opcao);



	switch(opcao){
		
		case 1:
		 	system("cls");
		 	adicionar();
		 	break;

		case 2:
			system("cls");
			excluir();
			break;

		case 3:
			break;	
		 
		 
		default:
			printf("\nOpcao invalida!\n");
			break;
		 
	}
	
		
}