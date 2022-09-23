#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int aa,an,id;
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
		}
		return 0;
}
