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
		printf("� primo");
	}else{
		printf("N�o � primo");
	}
	return 0;
}
