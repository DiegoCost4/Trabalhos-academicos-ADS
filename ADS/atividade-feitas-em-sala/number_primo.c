int main ()
{
	int primo,c,n,p;
	
	primo=0;
	c=2;
	
	while(c<n){
		p=n%c;
		if(p==0){
			primo=1;
		}
		c=c+1;
	}
	if(primo==0){
		printf("é primo");
	}else{
		printf("Não é primo");
	}
	return 0;
}
