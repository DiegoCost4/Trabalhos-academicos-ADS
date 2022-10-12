#include <string.h>
#include <conio.h>
//#include "file-database.c"
//#include "login-screen.c"

void getSenha(char *senha, char caractere)
{
    int c = 0;
    while((senha[c] = getch())!=13)
    {
        printf("%c", caractere);
        c++;
    }
    senha[c] = '\0';
}
