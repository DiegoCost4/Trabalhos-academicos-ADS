#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include "espacoFunction.c"

void CdProdut(){	
	
	char nameProduct[100];
	char brand[15];
	char category[50];
	int qntd;
	float costPrice,salePrice;
	
	printf("****************************************\n");
	printf("**********Cadastro de Produtos**********\n");
	printf("****************************************\n\n");
	
	printf("Nome do produto: ");
	scanf("%s", nameProduct);
	
	printf("Marca: ");
	scanf("%s", brand);
	
	printf("Quantidade: ");
	scanf("%i",&qntd);
	
	printf("Preço de compra: ");
	scanf("%f",&costPrice);
	
	printf("Preço de venda: ");
	scanf("%f",&salePrice);
	
	printf("Categoria: ");
	scanf("%s",category);
	
	
	FILE *arqDataBaseProducts;
	arqDataBaseProducts = fopen("DataBaseProducts.txt", "a+");
	
	fprintf(arqDataBaseProducts,"%s %s %i R$%.2f R$%.2f %s\n",nameProduct,brand,qntd,costPrice,salePrice,category);
	
	fclose(arqDataBaseProducts);


	FILE *storage;
	storage = fopen("Storage.txt", "a+");

	fprintf(storage, "%s   %i\n\n", nameProduct, qntd);

	fclose(storage);



}
