#include <stdio.h>
#include <locale.h>

#include "home-menu.c"
#include "option-menu.c"
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	MenuPrincipal(); // Cadastro/Login
	//MenuOpcoes(); //

		

	printf("DEEEEU CEERTOOOOOOO");
	return 0;
}

