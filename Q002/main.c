#include "lista6.h"


struct estoque{
    int qtdString;
    char *nomePeca;
    float price;
    int id;
};

void imprimindoEstoques(const struct estoque *ptrPecas, const int qtdEstoque);
void lendoEstoque(int , struct estoque *);

int main(){
    struct  estoque *pecas;
    int qtd, *qtdString;
    puts("Digite a quantidade de peças que você deseja: ");
    scanf("%d", &qtd);
    

    pecas = malloc(qtd * sizeof(struct estoque));


    lendoEstoque(qtd, pecas);
    imprimindoEstoques(pecas, qtd);

    return 0;
}

void lendoEstoque(int qtd, struct estoque *ptrPecas){

    for(int i = 0; i < qtd; i++){
       
        printf("Digite o tamanho de caracteres do nome da %d peça: ", i+1);
        scanf("%d", &(ptrPecas->qtdString));
        ptrPecas[i].nomePeca = calloc(ptrPecas->qtdString, sizeof(char));

        puts("Digite o nome da peça: ");
        scanf("%s", ptrPecas[i].nomePeca);

        puts("Digite o valor da peça");
        scanf("%f", &ptrPecas[i].price);

        puts("Digite o identificado da peça: ");
        scanf("%d", &ptrPecas[i].id);

        puts("===================================================");
    }   

}

void imprimindoEstoques(const struct estoque *ptrPecas, const int qtdEstoque){

        for(int i = 0; i < qtdEstoque; i++){
            printf("NOME DA PEÇA: ");
            imprimirString(ptrPecas->nomePeca, ptrPecas->qtdString);
            printf("PREÇO: %.2f \n", ptrPecas->price);
            printf(" IDENTIFICADOR: %d \n", ptrPecas->id);
        }

}