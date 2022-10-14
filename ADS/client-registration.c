#include <stdio.h>
//#include "espacoFunction.c"
void CadastrosClient(){
	int opcao = 0;
	
	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	char email[30];
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
	
	printf("Digite o seu e-mail: "); // E-mail do Cliente
	scanf("%s", email);
	
	printf("Digite o CPF: ");
	scanf("%f",&cpf); // Cpf ( Fazer função de validação)
	
	printf("Cadastro efetuado!\n\n");
	
	printf("Selecione a opção que deseja: \n");
	printf("1 - Cadastrar novo cliente\n");
	printf("2 - Retornar ao Menu de opções\n");
	printf("3 - Sair\n");	
	scanf("%i",&opcao);

	switch(opcao){
		case 1:
			system("cls");
			CadastrosClient(); // Funcionando
			break;
		case 2: 
			system("cls") ;
			MenuOpcoes(); // Funcionando
			break;
		case 3:
			system("exit");// Validar Função
		default :
			printf("\nOpção Invalida!!");
			break;
	}
	
	//Banco de dados
	FILE *arqClientDatabase;
	arqClientDatabase = fopen("clientesDatabse.txt","a+");
	
	fprintf(arqClientDatabase,"%s %s %s %s %f\n", nameClient,lastName,NumberClient,email,cpf);
	//fprintf(arqClientDatabase,"%d \n", NumberClient);
	
	fclose(arqClientDatabase);
	

	
}
