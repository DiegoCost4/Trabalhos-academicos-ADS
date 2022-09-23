#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int value,c=0,multi;
	
	printf("Digite o valor: ");
	scanf("%i",&value);
	
	if(value<0){
		printf("numero invalido");
	}else{
		while (c<11)
		{	
		multi=value*c;
		printf("%i x %i = %i\n",value,c,multi);
		c=c+1;		
		}
	}
		return 0;
}

