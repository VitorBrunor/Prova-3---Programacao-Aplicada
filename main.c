/*
Atividade 1
Nomes da dupla: Daniel Vettorazzi e Vitor Brunor
*/



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

#define NUMERO_DE_CARACTERES 20
//int NumeroDeTrocas(char *palavra_antiga[1], int numero_elementos, char substituido, char substitui, char *palavra_nova[1]);

int main (void){   
    //interagir c usuario;
    int numero_elementos = 10, numero_trocas = 0;
    char palavra_antiga[numero_elementos], palavra_nova[numero_elementos], letra_antiga[2], letra_nova[2];
    /*
    main:
    pedir quantos caracteres a palavra vai ter;
    pedir a palavra antiga;
    pedir a letra que vai ser substituida;
    pedir a letra q à substituirá;..
    função:
    vai trocar a letra pela outra( com um for ou um while q vai percorrer a string, vai verificar uma a uma letra se ela eh igual a letra q vai ser trocada, se ela for igual vai trocar a letra naquela posição pela nova);
    toda vez que trocar uma letra, aumenta em 1 o contador de trocas;
    retornar o valor do contador
    */
    //....
    printf("Atividade 3 - Questao 1:\nProblema de troca em um vetor de caracteres\n\nEntrada:\n");
    //scanf("%i", &numero_elementos);
    //numero_elementos = 6;
    numero_elementos = NUMERO_DE_CARACTERES;
    //printf("Entre com a palavra inicial: \n");
    scanf("%s", palavra_antiga);

    //printf("Entre com a letra a ser substituida: \n");
    scanf("%s", letra_antiga);
  
    //printf("Entre com a letra que substituirá: \n");
    scanf("%s", letra_nova);

    //teste:
    //printf("%s\n", palavra_antiga);
    //printf("%s\n", letra_antiga);
    //printf("%s\n", letra_nova);
  

    numero_trocas = NumeroDeTrocas(numero_elementos, palavra_antiga, letra_antiga, letra_nova, palavra_nova);

    printf("%i\n" , numero_trocas);
  
    return 0;
}
