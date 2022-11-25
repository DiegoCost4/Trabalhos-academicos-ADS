#include <stdio.h>
#include <stdlib.h>

void lsClient(){
	FILE* cliente;
	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	char email[30];
	
	printf("\n\nListagem de Produtos\n\n");
	
	cliente = fopen("clientesDatabase.txt", "r");  //abertura do DB de produtos
	
	printf("      Nome       |    Sobrenome    |     Telefone    |   email  \n");
	
	while(!feof(cliente)){
		
		fscanf(cliente, "%s %s %s %s \n", nameClient, lastName, NumberClient, email); //acesso aos dados
		
		printf("%-15s  | %-15s | %-15s | %-15s |\n", nameClient, lastName, NumberClient, email); //exibiÃ§Ã£o na tela
	}
	
	
	fclose(cliente);
	
	printf("\nFim da listagem. Pressione ENTER para retornar ao Menu Principal. \n \n");
	char ch;
	
	
	
	while(ch != 0x0A){
		getchar();
		ch = fgetc(stdin);
		if(ch == 0x0A){
		
		MenuOpcoes();
	}
	else{
		printf("Opção inválida. Pressione ENTER para retornar ao Menu Principal. \n \n");
	}
	}
}