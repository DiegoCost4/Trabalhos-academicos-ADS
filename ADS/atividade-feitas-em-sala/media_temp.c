#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int	n,value,c,t,media;
	char cont;
		do{
		c=0;
		t=0;
	while(c<7){
		printf("Informe o valor: ");
		scanf("%i",&value);	
			t=t+value;
			c=c+1;			
	}
	media = t/c;
	
	printf("A media e: %i\n",media);
	getchar();
		printf("Deseja calcular novamente S / N: ");
			scanf("%c",&cont);		
							
		}while(cont=='s');
	return 0;
}
