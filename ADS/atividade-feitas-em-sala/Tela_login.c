int main () 
{
	char userId,passwordId,validacao,cadastroUserId,cadastroPasswordId;
	
	printf("Voc� ja possui cadastro? S/N: ");
	scanf("%c",&validacao);
	
	if(validacao==s){ // fa�a login
			printf("Digite seu nome de usuario:\n ");
				scanf("%c",&userId);
			printf("Digite sua senha:\n ");
				scanf("%c",&passwordId);
	}else{//crie sua conta
	printf("Digite o nome de usuario desejado: ");
		scanf("%c",&cadastroUserId);
	printf("Digite a senha desejada: \n OBS: Somente s�o permitidos letras: ");
	scanf("%c",&cadastroPasswordId);
	
}
return 0;	
}
