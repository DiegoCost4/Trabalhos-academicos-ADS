#include <stdio.h>
#include "login-screen.c"
#include "file-database.c"
void MenuPrincipal(){
	int opcao = 0;
	printf("*****************************************\n");
	printf("***************DevSolution***************\n");
	printf("*****************************************\n\n");

	printf("1) - Cadastre-se\n");
	printf("2) - Conecte-se\n\n");

	printf("Digite a op��o desejada: ");
	scanf("%i",&opcao);
	
	switch (opcao) 
	{
		case 1 : 
			CadastroUser();
			break;
		case 2 :
			TelaLogin();
			break;
		default :
			printf("Op��o invalida!");
			break;		
	}
}
