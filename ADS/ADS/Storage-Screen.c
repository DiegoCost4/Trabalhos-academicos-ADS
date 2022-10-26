#include <stdio.h>
#include <stdlib.h>


void adicionar(){
	
	char nameProduct[20];
	int qntd;
	char resposta;

	
	printf("Digite o produto: ");
	
	scanf("%s", nameProduct);
	
	printf("Digite a quantidade do produto: ");
	
	scanf("%i", &qntd);
	
	
	
	FILE *storage;
	
	storage = fopen("Storage.txt", "a+");
	
	fprintf(storage, "%s %i\n" , nameProduct, qntd);
	
	fclose(storage);
	


	/*printf("Deseja adicionar outro produto no estoque?(s/n) \n");

	scanf("%s", resposta);

	switch (resposta)
	{
		case 's':
			StorageScreen();		 
			break;

		case 'n':
			MenuOpcoes();
			break;

	default:
		printf("OpÃ§Ã£o invÃ¡lida\n\n");
		break;*/
	


	/*if(resposta == 's' ){
		StorageScreen();
	}
	else if(resposta == 'n'){
		MenuOpcoes();
	}
	else{

		printf("Resposta invÃ¡lida, digite novamente...\n\n");

		printf("Deseja adicionar outro produto no estoque?(s/n) \n");

		scanf("%s", resposta);
	}*/

}


void StorageScreen(){
	
	
	
	int opcao = 0;
	
	printf("1- Adicionar\n");
	printf("2- Excluir\n");
	printf("3- Editar\n");
	
	scanf("%i", &opcao);


	switch(opcao){
		
		case 1:
		 system("cls");
		 adicionar();
		 break;

		 
		 
		default:
			printf("\nOpcao invalida!\n");
			break;
		 
	}
	
	
	
	
	
	
	
}