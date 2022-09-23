#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int	n,value,c,t;
	char cont;
	cont='s';

	do{
		c=0;
		t=0;
			printf("Quantos número deseja somar: ");
				scanf("%i",&n);				
	while(c<n){
		printf("Informe o valor: ");
		scanf("%i",&value);	
			t=t+value;
			c=c+1;			
	}
	printf("%i\n",t);
	getchar();
		printf("Deseja calcular novamente S / N: ");
			scanf("%c",&cont);		
							
		}while(cont=='s');
	return 0;
}
