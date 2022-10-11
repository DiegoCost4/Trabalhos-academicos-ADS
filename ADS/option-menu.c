#include <stdio.h>
#include "client-registration.c"
#include "collaborator-registration.c"
#include "cadastrarPerfil.c"

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
			CadastrosClient();
			break;
		case 2 :
			CadastroColaborador();
			break;
		case 3 :
			cadastrarPerfil();
			break;
		case 4 :
			system("exit");
			break;
		default :
			printf("Opcao invalida!");
			break;
	}
}
