#include <string.h>
#include <conio.h>

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
