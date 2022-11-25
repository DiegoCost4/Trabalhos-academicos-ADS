#include <stdio.h>
#include <stdlib.h>

void CadastroUser(){

	system("cls");
	
	char login[25];
	char senha[25];
	
	printf("*******TELA DE CADASTRO*******\n\n");
	
	printf("Cadastre seu login: ");
	scanf("%s",login);
	
	printf("Cadastre sua senha: ");
	scanf("%s",senha);

	
	FILE *arq;
	arq = fopen("clientes.txt","a+");
	
	fprintf(arq,"%s %s\n", login, senha);
	fclose(arq);
	
	TelaLogin();
	
	
}


