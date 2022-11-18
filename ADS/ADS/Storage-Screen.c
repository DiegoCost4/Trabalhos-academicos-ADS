#include <stdio.h>
#include <stdlib.h>
#include "funcoes-storage.c"

void StorageScreen()
{

	printf("**************************************\n");
	printf("***************ESTOQUE****************\n");
	printf("**************************************\n\n");

	int opcao = 0;

	printf("1- Adicionar\n");
	printf("2- Excluir\n");
	printf("3- Listagem\n");

	while (opcao != 1 || opcao != 2 || opcao != 3)
	{

		scanf("%i", &opcao);

		switch (opcao){

		case 1:
			system("cls");
			adicionar();
			break;

		case 2:
			system("cls");
			excluir();
			break;

		case 3:
			system("cls");
			listar();
			break;

		default:
			system("cls");
			printf("\nOpcao invalida!\n");
			printf("Digite uma opção válida!!!\n\n");
			printf("1- Adicionar\n");
			printf("2- Excluir\n");
			printf("3- Listagem\n");
			break;
		}
	}
}