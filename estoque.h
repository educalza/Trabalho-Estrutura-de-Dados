#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tipo que define o medicamento
struct medicamento{
    char nome[20];
    int codigo;
    float valor;
    int data[3];
}; typedef struct medicamento Medicamento;

// Tipo que define a lista
struct lista{
    Medicamento *m;
    struct lista *prox;
}; typedef struct lista Lista;


/* Cria um novo medicamento */
//Medicamento * CriaMedicamento ( FILE * fp , char * nome ,int codigo , float valor ,int * data_de_validade );
Medicamento *CriaMedicamento(FILE *fp, char *nome, int codigo, float valor, int *data_de_validade){
// ler o arquivo e armazenar em Medicamento

    fp = fopen("entrada.txt", "a");
    if(fp == NULL){
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }
    Medicamento *medicamento = (Medicamento*)malloc(sizeof(Medicamento));
    if(medicamento == NULL)

    printf("Nome: ");
    fgets(medicamento->nome, 20, stdin);
    medicamento->nome[strcspn(medicamento->nome,"\n")] = 0;



    
}


//Lista * CriaLista () ;
Lista *CriaLista(){
    return NULL;
}


/* Insere um medicamento em uma lista */
//Lista * InsereListaMedicamento ( FILE * fp , Lista * l , Medicamento * m );
Lista *InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *m){

    Lista *novo = (Lista*)malloc(sizeof(Lista));
    if(novo == NULL){ printf("Erro de abertura.\n"); exit(1);}
    FILE *fp = fopen("entrada.txt", "r");
    if(fp == NULL){ printf("Erro de abertura.\n"); exit(1);}

    strcpy(novo->m->nome, m->nome);
    novo->m->codigo = m->codigo;
    novo->m->valor = m->valor;
    for(int i=0; i<3; i++){
        novo->m->data[i] = m->data[i];
    }
    novo->prox = l;

}


/* Retira um medicamento de uma determinada lista */
//Lista * RetiraListaMedicamento ( FILE * fp , Lista * l , int id_medicamento );
Lista *RetiraListaMedicamento(FILE *fp, Lista *l, int id_medicamento){

}

/* Verifica se um medicamento e s t presente em uma determinada lista */
//int VerificaListaMedicamento ( FILE * fp , Lista * p , int id_medicamento ) ;
int VerificaListaMedicamento(FILE *fp, Lista *p, int id_medicamento){

}

/* Verifica se existe um medicamento vencido em uma determinada lista */
//int VerificaListaValidade ( FILE * fp , Lista * p , int * data ) ;
int VerificaListaValidade(FILE *fp, Lista *p, int *data){

}

/* Imprime todos os medicamentos de uma lista */
//void ImprimeListaMedicamentos ( FILE * fp , Lista * p ) ;
void ImprimeListaMedicamentos(FILE *fp, Lista *p){

}

/* Ordena Lista pelo valor do medicamento */
//Lista * OrdenaListaValor ( Lista * p ) ;
Lista *OrdenaListaValor(Lista *p){

}

/* Ordena Lista pela data de vencimento do medicamento */
//Lista * OrdenaListaVencimento ( Lista * p ) ;
Lista *OrdenaListaVencimento(Lista *p){

}