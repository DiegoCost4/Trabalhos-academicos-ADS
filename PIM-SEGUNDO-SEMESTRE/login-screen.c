#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "getsenha.c"
#define TAMANHO 10

int opcao = 0;

void TelaLogin()
{

    system("cls");

    FILE *arq;
    arq = fopen("clientes.txt", "rt"); // Abre arquivo para leitura

    char login[15];  // Valor a ser buscado no banco
    char login1[15]; // Entrada do Usuario
    char senha[15];  // Valor a ser buscado no banco
    char senha1[15]; // Entrada do Usuario

    printf("*******Tela de Login*******\n\n");

    printf("Digite o Login: ");
    scanf("%s", login1); 

    printf("Digite a Senha: ");
    getSenha(senha1, '*'); 

    while ((fscanf(arq, "%s %s", login, senha)) != EOF)
    {
       

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
        {

            printf("\n\nLOGADO!\n\n");
            MenuOpcoes();

            getchar();
            getchar();
        }
    }

    printf("\n\nDADOS INV�LIDOS!\n\n");
}
