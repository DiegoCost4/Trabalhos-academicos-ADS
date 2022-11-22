#include <stdio.h>
#include <stdlib.h>
#include "client-registration.c"
#include "product-registration.c"
#include "product-list.c"
#include "Storage-Screen.c"
#include "listarCliente.c"
//Incluir as demais telas confome for desenvolvendo

void MenuOpcoes(){
	
	system("cls");
	int opcao = 0;
	
	printf("**************************************\n");
	printf("************Menu de Opções************\n");
	printf("**************************************\n\n");	
	printf("1 - Cadastrar Cliente\n"); // Carlos 
	printf("2 - Cadastrar Produto\n"); // verificsr de excluir essa linh(tela storage ja faz isso)
	printf("3 - Listar Cliente\n"); // Vamos fazer juntos
	printf("4 - Listar Produtos\n"); // Kaique
	printf("5 - Estoque\n"); //Alexandre
	printf("6 - Sair\n");
	printf("Digite a opção desejada: ");
	
	
	while(opcao != 1 || opcao != 2 || opcao != 3 || opcao != 4 || opcao != 5 || opcao != 6){

	scanf("%d", &opcao);

	switch (opcao) 
	{
		case 1 :
			system("cls");
			CadastrosClient(); // Cadastra Clientes 
			break;
		case 2 :
			system("cls");
			CdProdut(); // Cadastra Produtos
			break;
		case 3 :
			system("cls");
			lsClient();
			break;
		case 4 :
			system("cls");
			lsProduct(); //Lista Produtos
			break;
		case 5 :
			system("cls");
			StorageScreen(); // Estoque
		case 6 :
			exit(0);
			break;
		default :
			system("cls");
			printf("\nOpção invalida!\n\n");
			printf("1 - Cadastrar Cliente\n"); 
			printf("2 - Cadastrar Produto\n"); 
			printf("3 - Listar Cliente\n"); 
			printf("4 - Listar Produtos\n"); 
			printf("5 - Estoque\n"); 
			printf("6 - Sair\n\n");
			printf("Digite uma opção válida: ");

			break;
	}
	}

	system("pause");
}
