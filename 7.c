#include "pilha.h"

void ordena(Pilha A, Pilha B){
    int valor,qtd;
    printf("Quantidade de numeros: ");
    scanf("%d", &qtd);

    for(int i =0; i<qtd;i++){
        printf("Numero: ");
        scanf("%d", &valor);
        if(i==0){// se for o primeiro item, empilha na A
            empilha(valor,A);
        }else{
            if(valor< getTopo(A)){// caso o valor seja menor que o topo, empilha
                empilha(valor,A);
            }else{
                while(!emptyp(A) && getTopo(A) < valor){
                    empilha(desempilha(A),B);
                }

                empilha(valor,A);
                while (!emptyp(B)) {
                    empilha(desempilha(B), A);
            }
        }
    }
    }
}

int main(){
    
    Pilha A = pilha(100);
    Pilha B = pilha(100);

    ordena(A,B);
    // printf("Elementos ordenados:\n");
    while (!emptyp(A)) {
        printf("%d\n",desempilha(A));
    }

    return 0;
}