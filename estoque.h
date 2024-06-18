#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

    fp = fopen("entrada.txt", "r");
    if(fp == NULL){ printf("Erro ao abrir arquivo.\n"); exit(1); }

    Medicamento *m = (Medicamento*)malloc(sizeof(Medicamento));
    if(m == NULL){ printf("Erro de abertura.\n"); exit(1); }

    const char *campoNome = "MEDICAMENTO";
    char string[20];

    while(fscanf(fp, "%19s", string) != EOF){
        if(strcmp(string, campoNome) == 0){
            if(fscanf(fp, "%19s", m->nome) == 1){
                if(fscanf(fp, "%d %f %d %d %d", &m->codigo, &m->valor, &m->data[0], &m->data[1], &m->data[2]) != 5){
                    printf("Erro de leitura\n");
                }
            } else{
                printf("Erro de leitura.\n");
            }
        }
    }
    return m;
}


//Lista * CriaLista () ;
Lista *CriaLista(){
    return NULL;
}


/* Insere um medicamento em uma lista */
//Lista * InsereListaMedicamento ( FILE * fp , Lista * l , Medicamento * m );
Lista *InsereListaMedicamento(FILE *fp, Lista *l, Medicamento *m){

    fp = fopen("entrada.txt", "r");
    if(fp == NULL){ printf("Erro de abertura.\n"); exit(1);}

    const char *campoNome = "MEDICAMENTO";
    char string[20];

    while(fscanf(fp, "%19s", string) != EOF){
        if(strcmp(string, campoNome) == 0){
            Lista *novo = (Lista*)malloc(sizeof(Lista));
            if(novo == NULL){ printf("Erro de abertura.\n"); exit(1);}
            strcpy(novo->m->nome, m->nome);
            novo->m->codigo = m->codigo;
            novo->m->valor = m->valor;
            for(int i=0; i<3; i++){
                novo->m->data[i] = m->data[i];
            }
            novo->prox = l;
            return novo;
        }
    }
    return 0;
}


/* Retira um medicamento de uma determinada lista */
//Lista * RetiraListaMedicamento ( FILE * fp , Lista * l , int id_medicamento );
Lista *RetiraListaMedicamento(Lista *l, int id_medicamento){

    Lista *ant = NULL, *p = l;

    while(p!=NULL && p->m->codigo != id_medicamento){
        ant = p;
        p = p->prox;
    }
    if(ant == NULL){
        l = p->prox;
    }
    if(p == NULL){
        return l;
    }else{
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

/* Verifica se um medicamento e s t presente em uma determinada lista */
//int VerificaListaMedicamento ( FILE * fp , Lista * p , int id_medicamento ) ;
int VerificaListaMedicamento(Lista *l, int id_medicamento){

    Lista *p = l;
    while(p!=NULL){
        if(p->m->codigo == id_medicamento){
            return 1;
        }
    }
    return 0;
}

/* Verifica se existe um medicamento vencido em uma determinada lista */
//int VerificaListaValidade ( FILE * fp , Lista * p , int * data ) ;
int VerificaListaValidade(FILE *fp, Lista *p, int *data){


}

/* Imprime todos os medicamentos de uma lista */
//void ImprimeListaMedicamentos ( FILE * fp , Lista * l) ;
void ImprimeListaMedicamentos(FILE *fp, Lista *l){

    Lista *p;

    for(p = l; p!=NULL; p=p->prox){
        printf("")
    }
}

/* Ordena Lista pelo valor do medicamento */
//Lista * OrdenaListaValor ( Lista * p ) ;
Lista *OrdenaListaValor(Lista *p){

}

/* Ordena Lista pela data de vencimento do medicamento */
//Lista * OrdenaListaVencimento ( Lista * p ) ;
Lista *OrdenaListaVencimento(Lista *p){

}