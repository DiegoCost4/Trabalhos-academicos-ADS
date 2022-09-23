#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;


void TelaLogin(){

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro
    

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);
        

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
            system("cls");
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }

}

void MostraMenu(){
	
	printf("********************************************\n");
	printf("********SEJA BEM VINDO AO (NOME)************\n");
	printf("********************************************\n");
	
	printf("1) - CADASTRO DE CLIENTE\n");
	printf("2) - CADASTRO DE FUNCIONARIOS\n");
	printf("3) - SAIR DO SISTEMA\n\n");
	printf("DIGITE A OPÇÃO DESEJADA: ");
	scanf("%d", &opcao);
	
	getchar();
	
}
	void CadastroClientes() {		
		char nome[40];
		char sobrenome[40];
		char cpf[8];
		
		printf("\n\nAdicione os dados do Cliente\n");
		
		printf("Digite o nome do cliente: ");
		scanf("%s",&nome);
		
		printf("Digite o sobrenome do cliente: ");
		scanf("%s",&sobrenome);
		
		printf("Digite o CPF: ");
		scanf("%s",&cpf);

	}
	void CadastroFuncionarios(){
		printf("\n\nAdicione os dados do Funcionario\n");
	}
	
	int main() {
		setlocale(LC_ALL, "");
		
		TelaLogin();
		
		MostraMenu();
		
		switch (opcao)
		
		{
			case 1 : // Gravar Clientes
				
				CadastroClientes();
			
			break;
			
			case 2 : // Gravar Funcionarios
			
				CadastroFuncionarios();
			
			break;
			
			case 3: 
				
				system("exit");
				
			break;
			
			default :
				
				printf("Opção invalida!");
			
			break;
		}
		getchar();
		
	return 0;
	}

