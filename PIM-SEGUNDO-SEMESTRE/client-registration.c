#include <stdio.h>
#include <stdlib.h>
//#include "espacoFunction.c"

void CadastrosClient()
{

	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	char email[30];


	int opcao = 0;

	printf("****************************************\n");
	printf("***********Cadastro de Clientes*********\n");
	printf("****************************************\n\n");

	printf("\nDigite os dados do cliente!\n\n");

	printf("Nome: ");
	scanf("%s", nameClient); // Nome do Cliente, Ver como obter nome completo usando espa?o (fun??o espacoFunction.c)

	printf("Sobrenome: ");
	scanf("%s", lastName); // Sobrenome (provisorio enqunato n?o sabemos como obter o nome completo na fun??o anterior

	printf("Telefone: ");
	scanf("%s", NumberClient); // Numero do cliente

	printf("Digite o seu e-mail: "); // E-mail do Cliente
	scanf("%s", email);



	// Banco de dados
	FILE *arqClientDatabase;
	arqClientDatabase = fopen("clientesDatabase.txt", "a+");

	fprintf(arqClientDatabase, "%s %s %s %s \n", nameClient, lastName, NumberClient, email);
	// fprintf(arqClientDatabase,"%d \n", NumberClient);

	fclose(arqClientDatabase);

	printf("Cadastro efetuado!\n\n");

	printf("Selecione a opções que deseja: \n");
	printf("1 - Cadastrar novo cliente\n");
	printf("2 - Retornar ao Menu de opções\n");
	printf("3 - Sair\n");

	while (opcao != 1 || opcao != 2 || opcao != 3)
	{
		scanf("%i", &opcao);

		switch (opcao)
		{
		case 1:
			system("cls");
			CadastrosClient(); // Funcionando
			break;
		case 2:
			system("cls");
			MenuOpcoes(); // Funcionando
			break;
		case 3:
			exit(0); // Validar Função
		default:
			system("cls");
			printf("\nOpção Inválida!!\n \n");
			printf("1 - Cadastrar novo cliente\n");
			printf("2 - Retornar ao Menu de opções\n");
			printf("3 - Sair\n");
			printf("Digite uma opção válida: ");
			break;
		}
	}
}
