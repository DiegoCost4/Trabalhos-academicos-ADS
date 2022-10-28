#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "home-menu.c"
#include "option-menu.c"
//Sobe caralho
/// @brief 0
/// @return 

int main() {
	    setlocale( LC_ALL, "" );
	
	MenuPrincipal(); // Cadastro/Login
	MenuOpcoes(); // Opções Para Nevegação

	printf("DEEEEU CEERTOOOOOOO");
	return 0;
}

