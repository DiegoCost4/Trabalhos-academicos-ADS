#include <stdio.h>
void CadastroUser(){

	system("cls");
	
	char login[25],senha[25];
	
	printf("*******TELA DE CADASTRO*******\n\n");
	
	printf("Cadastre seu login: ");
	scanf("%s",login);
	
	printf("Cadastre sua senha: ");
	scanf("%s",senha);

	
	FILE *arq;
	arq = fopen("clientes.txt","a+");
	
	fprintf(arq,"%s %s\n", login, senha);
	//fprintf(arq,"%s\n", senha);
	fclose(arq);
	
	TelaLogin(); // Depois de cadastrar retorna para tela de login
	
}


