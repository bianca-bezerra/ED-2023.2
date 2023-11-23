#include "fila.h"
#include "pilha.h"

void empilhaPorFila(Fila f,itemf item) {
    // Enfileira o item na fila1
    Fila f_aux = fila(10);
    enfileira(item, f_aux);

    while (!emptyf(f)) {
        enfileira(desinfileira(f),f_aux);
    }

    while(!emptyf(f_aux)){
        enfileira(desinfileira(f_aux),f);
    }

}

itemf desempilhaPorFila(Fila f) {
    return desinfileira(f);
}

int main() {
    Fila f1 = fila(10);
  
    empilhaPorFila(f1,0);
    empilhaPorFila(f1,9);
    empilhaPorFila(f1,19);
    empilhaPorFila(f1,193);
    

    while(!emptyf(f1)){
        printf("%d\n", desempilhaPorFila(f1));
    }
    
    return 0;
}
