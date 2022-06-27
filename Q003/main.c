#include "lista6.h"


struct noWay
{
    int *ptrMatrizVetorAleatorio;
    int qtd;
    float media;

};

#define TAM 100
#define RANGE 100
int main(){
    int *vetorAleatorio;
    struct  noWay estrutura1;

    vetorAleatorio = calloc(TAM, sizeof(int));

    gerarValoresAleatorios(vetorAleatorio, TAM, RANGE);

    // definindo estrutura
    estrutura1.ptrMatrizVetorAleatorio = vetorAleatorio;
    estrutura1.qtd = TAM;
    estrutura1.media = media(vetorAleatorio, TAM);

    puts("ELEMENTOS");
    imprimindoVetor(estrutura1.ptrMatrizVetorAleatorio, TAM);

    printf("MEDIA = %.2f \n", estrutura1.media);
    printf("ENDEREÇO NA ESTRUTURA: %p", estrutura1.ptrMatrizVetorAleatorio);

    return 0;
}