#include "lista6.h"

#define TAM 2
#define TAMALUNOS 3

struct aluno{
    int nota[TAM];
    float media;
};

int main(){
    struct aluno *alunos;
 
    // definindo a quantidade de alunos
    alunos = malloc(TAMALUNOS * sizeof(struct aluno));

    // GERANDO NOTAS ALEATORIAS
    for(int i = 0; i < TAMALUNOS; i++){
       gerarValoresAleatorios(((alunos+i)->nota), TAM, 10 );
    }   

    // imprimindo notas
     for(int a = 0; a < TAMALUNOS; a++){
       printf("ALUNO %d°\nNOTA 1 = %d, \nNOTA 2 = %d, \n", a+1, (alunos+a)->nota[0], (alunos+a)->nota[1]);
       printf("\n");
    }
   
    // imprimindo media
    for(int a = 0; a < TAMALUNOS; a++){
       (alunos+a)->media =  media((alunos->nota), TAM);
       printf("MEDIA DO %d °: %.2f \n", a+1, (alunos+a)->media);
    }

    return 0;
}
