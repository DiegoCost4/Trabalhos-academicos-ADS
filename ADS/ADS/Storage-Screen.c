#include <stdio.h>
#include <stdlib.h>


void adicionar(){
	
	char nameProduct[20];
	int qntd;
	
	printf("Digite o produto: ");
	
	scanf("%s", nameProduct);
	
	printf("Digite a quantidade do produto: ");
	
	scanf("%i", &qntd);
	
	
	
	FILE *DataBaseProducts;
	
	DataBaseProducts = fopen("DataBaseProducts.txt", "a+");
	
	fprintf(DataBaseProducts, "%s %i" , nameProduct, qntd);
	
	
	
}




void StorageScreen(){
	
	
	
	int opcao = 0;
	
	Printf("1- Adicionar");
	Printf("2- Excluir");
	Printf("3- Editar");
	
	switch(opcao){
		
		case 1:
		 system("cls");
		 
		 
		 
	}
	
	
	
	
	
	
	
}
