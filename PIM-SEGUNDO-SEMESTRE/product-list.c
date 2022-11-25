#include <stdio.h>
#include <stdlib.h>

void lsProduct(){
	FILE *arquivo;
	char nameProduct[100];
	char brand[15];
	char category[50];
	int qntd;
	float costPrice,salePrice;

	

	printf("\n\nListagem de Produtos\n\n");
	
	arquivo = fopen("DataBaseProducts.txt", "r");  //abertura do DB de produtos
	
	printf("Nome do Produto  |      Marca      |       QTD       |Pre�o de Compra  |  Pre�o de Venda | Categoria \n");
	
	while(!feof(arquivo)){
		
		fscanf(arquivo, "%s %s %i %f %f %s \n", nameProduct, brand, &qntd, &costPrice, &salePrice, category); //acesso aos dados
		
		printf("%-15s  | %-15s | %-15i | %-15.2f | %-15.2f | %-15s\n", nameProduct, brand, qntd, costPrice, salePrice, category); //exibi��o na tela
	}
	
	fclose(arquivo);
	
	printf("\nFim da listagem. Pressione ENTER para retornar ao Menu Principal. \n \n");
	char ch;
	
	
	
	while(ch != 0x0A){
		getchar();
		ch = fgetc(stdin);
		if(ch == 0x0A){
		
		MenuOpcoes();
	}
	else{
		printf("Op��o inv�lida. Pressione ENTER para retornar ao Menu Principal. \n \n");
	}
	}


}