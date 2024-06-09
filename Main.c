#include "estoque.h"

void operations(){

    Lista *l;
    l = CriaLista();


}

void menu(Lista *l, Medicamento *m){

    FILE *fp;
    int option=0;
    do{
        printf("\n---------Menu---------\n");
        printf("   [1]Criar medicamento\n   [2]Procurar medicamento\n   [3]Retirar medicamento\n   [4]Verificar validade\n   [5]Imprime medicamentos\n   [6]Ordena valores\n   [7]Ordena validade\n   [8]Sair\n");
        scanf("%d", &option);
        switch(option){
        }
    } while (option!=8);
    
}

int main(void){
    menu();
    return 0;
}