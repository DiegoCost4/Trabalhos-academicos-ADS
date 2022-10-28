#include <stdio.h>
#include <stdlib.h>
#include "login-screen.c"
#include "file-database.c"

void MenuPrincipal(){
	int opcao = 0;
	printf("*****************************************\n");
	printf("***************DevSolution***************\n");
	printf("*****************************************\n\n");

	printf("1) - Cadastre-se\n");
	printf("2) - Conecte-se\n");
	printf("3) - Sair\n\n");

	printf("Digite a opção desejada: ");
	
	while(opcao!=1 || opcao!=2){

		scanf("%i",&opcao);
	
	switch (opcao) 
	{
		case 1 : 
			system("cls");
			CadastroUser(); // Cadastrar Usuario
			break;
		case 2 :
			system("cls");
			TelaLogin(); // Tela de login
			break;
		case 3  :
			printf("Vaza viado");
			exit(0);  // Encerra programa
			break;
		default :
			printf("Opção invalida!\n\n Digite uma opção válida: ");
			break;	
		}
	}
	
}
