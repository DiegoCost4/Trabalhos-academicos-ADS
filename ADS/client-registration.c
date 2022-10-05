#include <stdio.h>
void CadastrosClient(){
	
	char nameClient[50];
	int NumberClient;
	//char adress[50];//Não feito ainda
	
	printf("Digite os dados do cliente!\n\n");
	
	
	printf("Nome completo: \n");
	scanf("%s", nameClient);
	
	
	printf("Telefone: \n");
	scanf("%d",&NumberClient);
	
	printf("Cadastro efetuado!");
	
	
	//Banco de dados
	FILE *arqClientDatabase;
	arqClientDatabase = fopen("clientesDatabse.txt","a+");
	
	fprintf(arqClientDatabase,"%s %d\n", nameClient,NumberClient);
	//fprintf(arqClientDatabase,"%d \n", NumberClient);
	
	fclose(arqClientDatabase);
	
}
