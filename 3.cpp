#include "filaEncadeada.hpp"

int main(){
    Fila f(nullptr);
    f.empilhaFila('a');
    f.empilhaFila('b');
    f.empilhaFila('c');
    cout << f.desempilhaFila();
}