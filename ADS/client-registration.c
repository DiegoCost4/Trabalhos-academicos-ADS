#include <stdio.h>
#include <stdlib.h>
//#include "espacoFunction.c"

void CadastrosClient(){
	
	//Pessoa pessoa[100];
	//struct	Pessoa Cliente;
	int opcao = 0;
	
	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	char email[30];
	float cpf;
	
	//char adress[50];//N�o feito ainda
	printf("****************************************\n");
	printf("***********Cadastro de Clientes*********\n");
	printf("****************************************\n\n");

	printf("\nDigite os dados do cliente!\n\n");
	
	printf("Nome: ");			
<<<<<<< HEAD
	scanf("%s",nameClient);	// Nome do Cliente, Ver como obter nome completo usando espa�o (fun��o espacoFunction.c)
	
	printf("Sobrenome: ");
	scanf("%s",lastName);   // Sobrenome (provisorio enqunato n�o sabemos como obter o nome completo na fun��o anterior
		
	printf("Telefone: ");
	scanf("%s",NumberClient); // Numero do cliente
	
	printf("Digite o seu e-mail: "); // E-mail do Cliente
	scanf("%s",email);
	
	printf("Digite o CPF: ");
	scanf("%f",&cpf); // Cpf ( Fazer fun��o de valida��o)
=======
	scanf("%s", nameClient);	// Nome do Cliente, Ver como obter nome completo usando espa�o (fun��o espacoFunction.c)
	
	printf("Sobrenome: ");
	scanf("%s", lastName);   // Sobrenome (provisorio enqunato n�o sabemos como obter o nome completo na fun��o anterior
		
	printf("Telefone: ");
	scanf("%s", NumberClient); // Numero do cliente
	
	printf("Digite o seu e-mail: "); // E-mail do Cliente
	scanf("%s", email);
	
	printf("Digite o CPF: ");
	scanf("%f",&cpf); // Cpf ( Fazer fun��o de valida��o)
>>>>>>> 66ff87f8cc6d0d092f6d8924f311ac737f976cb5
	
	printf("Cadastro efetuado!\n\n");
	
	printf("Selecione a op��o que deseja: \n");
	printf("1 - Cadastrar novo cliente\n");
	printf("2 - Retornar ao Menu de op��es\n");
	printf("3 - Sair\n");	
	
	
	while(opcao!=1 || opcao!=2 || opcao!=3){
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
<<<<<<< HEAD
			printf("Obrigado por usar essa merda!");
			exit(0);// Validado
		default :
			printf("\nOp��o Invalida!!\n\n");
=======
			system("exit");// Validar Fun��o
		default :
			printf("\nOp��o Invalida!!");
>>>>>>> 66ff87f8cc6d0d092f6d8924f311ac737f976cb5
			break;
		}
		
	}
	
	
	//Banco de dados
	FILE *arqClientDatabase;
	arqClientDatabase = fopen("clientesDatabse.txt","a+");
	
<<<<<<< HEAD
	fprintf(arqClientDatabase,"%s %s %s %s %f\n", nameClient,lastName,NumberClient,email,cpf);
=======
	fprintf(arqClientDatabase,"%s %s %s %s %f\n", nameClient, lastName, NumberClient, email, cpf);
>>>>>>> 66ff87f8cc6d0d092f6d8924f311ac737f976cb5
	//fprintf(arqClientDatabase,"%d \n", NumberClient);
	
	fclose(arqClientDatabase);
	

	
}
