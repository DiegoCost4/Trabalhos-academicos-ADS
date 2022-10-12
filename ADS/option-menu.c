#include <stdio.h>
#include <stdlib.h>
#include "client-registration.c"
#include "product-registration.c"
#include "product-list.c"
//Incluir as demais telas confome for desenvolvendo

void MenuOpcoes(){
	
	system("cls");
	int opcao = 0;
	
	printf("**************************************\n");
	printf("************Menu de Opções************\n");
	printf("**************************************\n\n");	
	printf("1 - Cadastrar Cliente\n");
	printf("2 - Cadastrar Produto\n");
	printf("3 - Listar Cliente\n");
	printf("4 - Listar Produtos\n");
	printf("5 - Vender\n");
	printf("6 - Comprar\n");
	printf("7 - Sair\n");
	printf("Digite a opção desejada: ");
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
			//lsClient(); //Lista Clientes
			break;
		case 4 :
			system("cls");
			lsProduct(); //Lista Produtos
			break;
		case 5 :
			system("cls");
			//sellProduct(); //Vender Produtos
			break;
		case 6 :
			system("cls");
			//purchasePrduct(); // Comprar Produto
		case 7 :
			system("exit");
			break;
		default :
			printf("\nOpcao invalida!\n");
			break;
	}
	system("pause");
}
