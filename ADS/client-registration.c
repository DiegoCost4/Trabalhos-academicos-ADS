#include <stdio.h>
//#include "espacoFunction.c"
void CadastrosClient(){
	
	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	float cpf;
	//char adress[50];//Não feito ainda
	printf("****************************************\n");
	printf("***********Cadastro de Clientes*********\n");
	printf("****************************************\n\n");

	
	printf("\nDigite os dados do cliente!\n\n");
	
	
	printf("Nome: ");			
	scanf("%s", nameClient);	// Nome do Cliente, Ver como obter nome completo usando espaço (função espacoFunction.c)
	
	printf("Sobrenome: ");
	scanf("%s", lastName);   // Sobrenome (provisorio enqunato não sabemos como obter o nome completo na função anterior
		
	printf("Telefone: ");
	scanf("%s", NumberClient); // Numero do cliente
	
	printf("Digite o CPf: ");
	scanf("%f",&cpf); // Cpf ( Fazer função de validação)
	
	printf("Cadastro efetuado!\n\n");
	
	//Fazer retorno para menu de opções ou novo cadastros
	
	//Banco de dados
	FILE *arqClientDatabase;
	arqClientDatabase = fopen("clientesDatabse.txt","a+");
	
	fprintf(arqClientDatabase,"%s %s %s %f\n", nameClient,lastName,NumberClient,cpf);
	//fprintf(arqClientDatabase,"%d \n", NumberClient);
	
	fclose(arqClientDatabase);
	
}
