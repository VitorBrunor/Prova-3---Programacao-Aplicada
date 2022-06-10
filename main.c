/*
    gcc -c main.c -c biblioteca.c
    gcc -o main.exe main.o biblioteca.o

    gcc -c -g *.c
    gcc *.o -o program
    .\program.exe
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MinhaBiblioteca.h"

//int NumeroDeTrocas(char *palavra_antiga[1], int numero_elementos, char substituido, char substitui, char *palavra_nova[1]);

int main (void)
{   
    //interagir c usuario;
    char palavra_antiga[1], palavra_nova[1], letra_antiga, letra_nova;
    int numero_elementos;

    printf("eu existo\n");

    return 0;
}