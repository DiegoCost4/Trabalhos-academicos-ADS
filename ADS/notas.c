#include <stdio.h>
#include <locale.h>
#define TAMANHO 10

// variáveis globais, pois foram declaradas fora das funções
char ra[80];
float np1, np2, pim;
int i;
FILE* arquivo;
int opcao = 0;

void MostrarMenu()
{
	printf("(1) - Listar os dados cadastrados\n");
	printf("(2) - Adicionar um aluno com notas\n");
	printf("(3) - Excluir um aluno com notas\n");
	printf("(5) - Sair\n");
	printf("Entre com a opção desejada: ")	;
	scanf("%i", &opcao);
	getchar(); // limpar o <enter> do scanf anterior
}

void ListarRegistros()
{
	if (!arquivo_existe("notas.txt"))
		return;

	printf("\n\nListagem do cadastro\n\n");
	arquivo = fopen("notas.txt","r"); // abrir arquivo em modo leitura
	while(!feof(arquivo))
	{
		fscanf(arquivo,"%s %f %f %f\n", ra, &np1, &np2, &pim); // acessar os dados
		printf("RA: %s - Notas: (%f/%f/%f)\n",ra,np1,np2,pim); // exibir na tela
	}
	fclose(arquivo); // fechar o uso do arquivo

	printf("Fim da listagem!");
}

void GravarRegistro()
{
	printf("\n\nInclusão de registro\n\n");
	// obter os dados do usuário
	printf("RA: ");
	scanf("%s", ra);
	printf("Nota 1: "); scanf("%f", &np1);
	printf("Nota 2: "); scanf("%f", &np2);
	printf("PIM: "); scanf("%f", &pim);
	getchar(); // limpar o <enter> do scanf anterior

	arquivo = fopen("notas.txt","a+"); // abrir o arquivo em modo gravação
	fprintf(arquivo,"%s %f %f %f\n", ra, np1, np2, pim); // escrever no arquivo
	fclose(arquivo); // fechar o uso do arquivo

	printf("Registro adicionado com sucesos!");
}

void ExcluirRegistro()
{
	char raExcluir[80];
	printf("\nExclusão do cadastro\n\n");
	printf("Informe o RA que deseja remover: ");
	scanf("%s", raExcluir);
	arquivo = fopen("notas.txt","r"); // abrir arquivo em modo leitura
	FILE* arquivoNovo = fopen("notas_novo.txt","w"); // abrir arquivo em modo escrita
	while(!feof(arquivo))
	{
		fscanf(arquivo,"%s %f %f %f\n", ra, &np1, &np2, &pim); // acessar os dados
		if (strcmp(ra, raExcluir)!=0) // se o RA lido for diferente do desejado para exluir, grava no arquivo novo
		{
			fprintf(arquivoNovo,"%s %f %f %f\n", ra, np1, np2, pim); // escrever dados no arquivo novo
		}
	}
	fclose(arquivo); // fechar o uso do arquivo
	fclose(arquivoNovo); // fechar o uso do arquivo

	system("del notas.txt");
	system("rename notas_novo.txt notas.txt");

	printf("Fim da exclusão!");
}

int arquivo_existe(char nmarq[]) {
	FILE* arq = fopen(nmarq, "r");
    if (arq) {
        fclose(arq);
        return 1;
    }
    return 0;
}

int main()
{

	setlocale(LC_ALL,"Portuguese");

	while(opcao!=5)
	{

		MostrarMenu();

		switch(opcao)
		{
			case 1: // listar
				ListarRegistros();
				break;

			case 2: // gravar
				GravarRegistro();
				break;

			case 3: // gravar
				ExcluirRegistro();
				break;

			case 5: // sair
				break;

			default:
				printf("Opção inválida!");
				break;
		}
		printf("\n\nClique <ENTER> para continuar.\n\n");
		getchar();
		system("cls");
	} // fim do while

}
