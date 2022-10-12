#include <stdio.h>
#include <stdlib.h>
//#include "getsenha.c"

void CadastroUser(){

	system("cls");
	
	char login[25];
	char senha[25];
	
	printf("*******TELA DE CADASTRO*******\n\n");
	
	printf("Cadastre seu login: ");
	scanf("%s",login);
	
	printf("Cadastre sua senha: ");
	//getSenha(senha, '*'); // entrada + Esconde a senha 
	scanf("%s",senha);

	
	FILE *arq;
	arq = fopen("clientes.txt","a+");
	
	fprintf(arq,"%s %s\n", login, senha);
	//fprintf(arq,"%s\n", senha);
	fclose(arq);
	
	TelaLogin(); // Depois de cadastrar retorna para tela de login
	
	
}


