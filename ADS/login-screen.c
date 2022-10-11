#include <stdio.h>
#include <locale.h>
#include "getsenha.c"
#define TAMANHO 10


void TelaLogin(){
	
	FILE *arq;
	arq = fopen("clientes.txt","rt");
	
	//Tela para verificar se o user é um vendedor ou consumidor
	
    char login[15]; //vincular banco aqui para buscar valores 
    char login1[15]; // Entrada do usuario
    
    char senha[15]; //vincular banco aqui para buscar valores //
    char senha1[15]; // Entrada do usuario     
	 
	//printf("%s | %s\n", login, senha);
	getchar();//getchar();getchar();
	 
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(login_efetuado != 1){
    	//system("cls");
    	
        printf("Digite o Login: ");
        scanf("%s", login1);
        getchar();
		
        printf("Digite a Senha: ");
        //getSenha();
        scanf("%s", senha1);
        getchar();
        
	

	
	//printf("%s %s | %s %s", login, login1, senha, senha1);        


	while(!feof(arq))
	{
 		fscanf(arq,"%s %s\n", login ,senha); //Dados obtidos do banco
	
        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){ //compara entrada do usuario com valor salvo em banco
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
            MenuOpcoes();
        }
    
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    //retorno de uma entrada que não esteja cadastrada no banco
        getchar();	
	}
	getchar();getchar();
        //getchar();getchar();
    }
    
    
    
}

