#include <stdio.h>
#include <locale.h>
#include "home-menu.c"
#include "option-menu.c"

/// @brief 0
/// @return

int main()
{
	setlocale(LC_ALL, "");

	MenuPrincipal(); 
	MenuOpcoes();	

	return 0;
}
