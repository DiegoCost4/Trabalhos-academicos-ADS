#include <stdio.h>
#include <locale.h>
#include "home-menu.c"
#include "option-menu.c"
/// @brief 
/// @return 
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	MenuPrincipal(); // Cadastro/Login
	MenuOpcoes(); // Op��es Para Nevega��o

		

	//
	printf("DEEEEU CEERTOOOOOOO");
	return 0;
}

