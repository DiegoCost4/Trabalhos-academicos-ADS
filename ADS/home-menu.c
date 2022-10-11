#include <stdio.h>
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
	scanf("%i",&opcao);
	
	while(opcao!=4){
	
	switch (opcao) 
	{
		case 1 : 
			CadastroUser();
			break;
		case 2 :
			TelaLogin();
			break;
		case 3  :
			system("exit");
			break;
		default :
			printf("Opção invalida!");
			break;	
		}
	}
	
}
