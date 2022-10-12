#include <stdio.h>
#include <locale.h>
#include "home-menu.c"
#include "option-menu.c"
/// @brief 
/// @return 
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	MenuPrincipal(); // Cadastro/Login
	MenuOpcoes(); // Opções Para Nevegação

		

	//
	printf("DEEEEU CEERTOOOOOOO");
	return 0;
}

