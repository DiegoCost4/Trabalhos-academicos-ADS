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

	printf("Digite a op��o desejada: ");
	scanf("%i",&opcao);
	
	while(opcao!=4){
	
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
			system("exit");  // Validar Func�o (wrr: N�o est� funcionando)
			break;
		default :
			printf("Op��o invalida!");
			break;	
		}
	}
	
}
