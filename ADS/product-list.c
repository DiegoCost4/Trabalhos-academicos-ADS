#include <stdio.h>
#include <stdlib.h>

void lsProduct(){
	FILE* arquivo;
	char nameProduct[100];
	char brand[15];
	char category[50];
	int qntd;
	float costPrice,salePrice;
	
	printf("\n\nListagem de Produtos\n\n");
	
	arquivo = fopen("DataBaseProducts.txt", "r");  //abertura do DB de produtos
	
	printf("Nome do Produto  |   Marca  |  QTD   |  Pre�o de Custo  |   Pre�o de Venda  |   Categoria \n");
	
	while(!feof(arquivo)){
		fscanf(arquivo, "%s %s %i %f %f %s \n", nameProduct, brand, &qntd, &costPrice, &salePrice, category); //acesso aos dados
		
		printf("%s  | %s | %i | %.2f | %.2f | %s\n", nameProduct, brand, qntd, costPrice, salePrice, category); //exibi��o na tela
	}
	
	fclose(arquivo);
	
	  
	
	printf("\nFim da listagem. \n \n");
	
}
