#include <stdio.h>
	void TelaLogin(){
		
	FILE *arq;
	arq = fopen("clientes.txt","r");
	
	//printf("cesar");
	
    char login[25];
	fscanf(arq,"%s\n",login); //vincular banco aqui para buscar valores 
    char login1[15]; // Entrada do usuario
    char senha[25]; //vincular banco aqui para buscar valores //
    fscanf(arq,"%s\n",senha);
    char senha1[15]; // Entrada do usuario  
	   
	 
	 
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro
printf("'%s','%s'",login,senha);
    while(!login_efetuado){
    	system("cls");
    	
    	printf("*******TELA DE LOGIN*******\n\n");
        printf("\nDigite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);
        

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){ //compara entrada do usuario com valor salvo em banco
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
            system("cls");
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    //retorno de uma entrada que não esteja cadastrada no banco
    }
    
}
