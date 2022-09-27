#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao = 0;


void TelaLogin(){

    char login[15] = "t"; //vincular banco aqui para buscar valores 
    char login1[15]; // Entrada do usuario
    char senha[15] = "t"; //vincular banco aqui para buscar valores 
    char senha1[15]; // Entrada do usuario       
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro
    

    while(!login_efetuado){
        printf("Digite o Login: ");
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

void MostraMenu(){
	
	printf("********************************************\n");
	printf("********SEJA BEM VINDO AO (NOME)************\n");
	printf("********************************************\n");
	
	printf("1) - CADASTRO DE CLIENTE\n");
	printf("2) - CADASTRO DE FUNCIONARIOS\n");
	printf("3) - SAIR DO SISTEMA\n\n");
	printf("DIGITE A OPÇÃO DESEJADA: ");
	scanf("%d",&opcao);
	system("cls");

	
	
	getchar();
	
	
}
	void CadastroClientes() {		
		
		char nome[40];
		char sobrenome[40];
		int  cpf;
		int cont = 's';
			printf("\n\nAdicione os dados do Cliente\n\n");	
		while(cont=='s'){	
			printf("Digite o nome do cliente: ");
			scanf("%s",&nome);
			
			printf("Digite o sobrenome do cliente: ");
			scanf("%s",&sobrenome);

			printf("Digite o CPF: ");
			scanf("%d",&cpf);
	
			printf("Deseja cadastrar outros clientes S/N: ");		
			scanf("%s",&cont);
			system("cls");
		}
			printf("1) - CADASTRO DE CLIENTE\n");
			printf("2) - CADASTRO DE FUNCIONARIOS\n");
			printf("3) - SAIR DO SISTEMA\n\n");
			printf("DIGITE A OPÇÃO DESEJADA: ");
			scanf("%d",&opcao);
	}
	
	void CadastroFuncionarios(){
		
		char nomeFunc[40];
		int  funcionarioId;
		char cont = 's';
		
		printf("\n\nAdicione os dados do Colaborador\n\n");
		
		while(cont=='s'){			
			printf("Digite o nome do colaborador: \n");
			scanf("%c",&nomeFunc);
			
			printf("Digite o código do colaborador: ");
			scanf("%d",&funcionarioId);
			
			printf("Deseja cadastrar outros colaborador S/N: ");		
			scanf("%s",&cont);
			system("cls");
		}
			printf("1) - CADASTRO DE CLIENTE\n");
			printf("2) - CADASTRO DE FUNCIONARIOS\n");
			printf("3) - SAIR DO SISTEMA\n\n");
			printf("DIGITE A OPÇÃO DESEJADA: ");
			scanf("%d", &opcao);
	}
	
	int main() {
		setlocale(LC_ALL, "");		
		TelaLogin();
		MostraMenu();
		CadastroClientes();
		CadastroFuncionarios();
		
		switch (opcao)
		{
			case 1 : // Gravar Clientes		
				CadastroClientes();
				break;
			case 2: // Gravar Funcionarios
				CadastroFuncionarios();
				break;
			case 3: // Sair do sistema
				system("exit");
				break;
			default :
				printf("Opção invalida!");
				break;
		}
		getchar();
		
	return 0;
	}

