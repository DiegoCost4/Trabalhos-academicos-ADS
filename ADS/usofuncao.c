#include "getsenha.c"
#include "espaco.c"
#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	char senha[9];
	char texto[100];
	
	printf("Informe uma senha de at� 8 caracteres: ");
	getSenha(senha, '#');
	
	printf("\n\n");
	printf("A senha informada foi: %s\n\n", senha);
	
	printf("Informe um texto usando espa�os: ");
	gets(texto);
	
	printf("Texto original: %s\n", texto);

	TirarEspaco(texto);
	printf("Texto tirando espa�os: %s\n", texto);
	
	ColocarEspaco(texto);
	printf("Texto voltando os espa�os: %s\n", texto);
	
	getch();
	
	return 0;
}
