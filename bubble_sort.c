/* 
 * File:   main.c
 * Author: 0275158
 *
 * Created on 25 de Fevereiro de 2016, 21:18
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*
 * 
 */
int busca(int vetor[], int valor) {
    int x, pos = -1, result;
    for (x = 0; x < 10; x++) {
        if (vetor[x] == valor) {
            pos = x;
        }
    }

    return pos;
}

int main(int argc, char** argv) {
    int vet[10], aqui;
    int x, valor;
    vet[0] = 0;
    srand(time(NULL));
    for (x = 0; x < 10; x++) {

        if (busca(vet, rand() % 100) >= 0) {
            x--;
        } else vet[x] = (rand() % 100);
    }
    for (x = 0; x < 10; x++) {
        printf("\nvetor posicao %d: %d ", x, vet[x]);
    }
    printf("\n \n Insira valor a ser testado:");
    scanf("%d", &valor);

    aqui = busca(vet, valor);


    if (aqui >= 0) {
        printf("O numero existe e esta na posicao %d", aqui);
    } else if (aqui < 0) {
        printf("O numero nao existe");
    }
  
        
        
    return (EXIT_SUCCESS);
}

