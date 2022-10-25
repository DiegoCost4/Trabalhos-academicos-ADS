#include <stdio.h>
#include <locale.h>
//#include <iostream>
//using namespace std;
#include "home-menu.c"
#include "option-menu.c"
//#include "definition.c"

/// @brief 0
/// @return 
/*
typedef struct {
		
	char nameClient[50];
	char lastName[50];
	char NumberClient[11];
	char email[30];
	float cpf[11];
	}Pessoa;*/




int main() {
	//definition();
	    setlocale( LC_ALL, "" );

	
	MenuPrincipal(); // Cadastro/Login
	MenuOpcoes(); // Opções Para Nevegação

		

	//
	printf("DEEEEU CEERTOOOOOOO");
	return 0;
}

