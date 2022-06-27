#include <stdio.h>
#include <stdlib.h>

#define TAM 2

void media(int tam, float * const notas, float * const medias);

struct aluno{
    float nota[TAM];
    float media;
};

int main(){
    struct aluno *alunos;
    int qtdAluno;

    puts("Digite a quantidade de alunos");
    scanf("%d", &qtdAluno);


    // definindo a quantidade de alunos
    alunos = malloc(qtdAluno * sizeof(struct aluno));

    // declarando notas pelo usuario
    for(int i = 0; i < qtdAluno; i++){
        for(int notas = 0; notas < TAM; notas++){
            printf("Digite a nota %d do %d° aluno", notas+1, i+1);
            scanf("%f", &(alunos+i)->nota[notas]);
        }
    }

    for(int a = 0; a < qtdAluno; a++){
        media(TAM, (alunos+a)->nota, &((alunos+a)->media));
    }

    return 0;
}

// calcudando a media
void media(int tam, float * const notas, float * const medias){
    for(int i = 0; i < tam; i++){
        *medias += *(notas+i)/tam; 
    }

    printf("%.2f \n", *medias);
}