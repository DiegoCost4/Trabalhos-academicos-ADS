#include <stdio.h>
#include <stdlib.h>
int main ()
{
	 /*aa,an,id;
	char cont;
		
		cont='s';
		
		while(cont=='s'){
			
			printf("Digite o seu ano de nascimento: ");
				scanf("%i",&an);
			
			printf("Digite o ano atual: ");
				scanf("%i",&aa);
			
				id=aa-an;
				
					printf("%i\n",id);
				getchar();
				
				printf("Deseja calcular novamente S / N: ");
					scanf("%c",&cont);
		}*/
		char nome[40];
		char sobrenome[40];
		char cpf[8];
		char cont='s';
		
		
		printf("\n\nAdicione os dados do Cliente\n");
		
		while(cont=='s'){	
		
		
		printf("Digite o nome do cliente: ");
			scanf("%s",&nome);
		
		printf("Digite o sobrenome do cliente: ");
			scanf("%s",&sobrenome);
		
		printf("Digite o CPF: ");
			scanf("%s",&cpf);
		
		
		
		printf("Deseja cadastrar outro cliente S/N: ");		
			scanf("%s",&cont);
	}
		return 0;
}
