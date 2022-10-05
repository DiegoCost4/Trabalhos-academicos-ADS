#include <stdio.h>
void MenuOpcoes(){
	int opcao = 0;
	
	printf("1 - Cadastro de Clientes\n");
	printf("2 - Cadastro de Colaboradores\n");
	printf("3 - Cadastro de perfil\n");
	printf("4 - Sair do sistema\n\n");
	printf("Digite a opção desejada: ");
	
	switch (opcao) 
	{
		case 1 :
			//tela de cadastro de cliente();
			break;
		case 2 :
			//tela de cadastro de Colaborador();
			break;
		case 3 :
			//tela de cadastro de perfil();
			break;
		case 4 :
			system("exit");
			break;
		default :
			printf("Opcao invalida!");
			break;
	}
}
