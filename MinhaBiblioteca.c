#include "MinhaBiblioteca.h"
#include <string.h>
#include <stdio.h>

//criar genuinamente a função;


int NumeroDeTrocas(int numero_elementos, char palavra_antiga[], char letra_antiga[], char letra_nova[], char palavra_nova[]){  
int trocas =0;
//criar o programa:
//teste:
//printf("%s\n", palavra_antiga);
//printf("%s\n", substituido);
//printf("%s\n", substitui);
//leitura da string:
int valor = 0;
valor = strlen(palavra_antiga);
    //numero_elementos = strlen(palavra_antiga);
    //printf("%i\n", numero_elementos);
    printf("\nSaida: \n");
    for(int i=0; i < valor; i++){
        //printf("%c\n", palavra[i]);
        if (strncmp(palavra_antiga+i, letra_antiga, 1) == 0){
        //printf("IGUAL\n");
        printf("%s", letra_nova);
        trocas++;
        }
        else if(strncmp(palavra_antiga + i, letra_antiga, 1) != 0 || strncmp(palavra_antiga + i, letra_nova, 1) ==0){
          //printf("DIFERENTE\n");
          printf("%c", palavra_antiga[i]);
        }
      }
  printf("\n");
  printf("%s\n", palavra_antiga);

  return (trocas);
}