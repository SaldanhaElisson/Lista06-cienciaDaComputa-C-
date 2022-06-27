#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirString(const char *const string, const int qtd ){
    
    for(int i = 0; i < qtd; i++){
        printf("%c", *(string+i));
    }

    printf("\n");
}

void gerarValoresAleatorios(int *const ptr, const int qtd, const int range){
    srand(time(NULL));

    for(int i = 0; i < qtd; i++){
        *(ptr+i) = rand() % range;
    }
}

float media(const int *valor, const int qtd){
    float mediaValores = 0;
    for(int i = 0; i < qtd; i++){
        mediaValores += *(valor+i);
    }
    return mediaValores/qtd;
}

void imprimindoVetor(const int *const vetor, const int qtd){
    for(int i = 0; i < qtd; i ++){
        printf("%d, ", *(vetor+i));
    }
    printf("\n");
}