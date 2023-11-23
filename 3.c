#include "fila.h"
#include "pilha.h"

void empilharPorFila(Fila f1, Pilha p, itemf item){
    
    enfileira(item,f1);//Coloca o item no fim da fila

    while(!fullp(p) && !emptyf(f1)){//Transferencia de f1 para pilha
        p->topo++;
        p->item[p->topo] = desinfileira(f1);
    }

}

itemf desempilhaPorFila(Fila f2, Pilha p){

    while(!emptyp(p) && !fullf(f2)){
        itemp item = p->item[p->topo];
        enfileira(item,f2);
        p->topo--;
    }

    return desinfileira(f2);
}

int main(){
    
    Fila f1 = fila(5);
    Fila f2 = fila(5);
    Pilha p = pilha(5);
    empilharPorFila(f1,p,10);
    empilharPorFila(f1,p,12);
    printf("%d",desempilhaPorFila(f2,p));
    
}