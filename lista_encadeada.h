#include <iostream>
using namespace std;

struct Node{
   int valor;
   Node *proximo;
};

void exibe(Node *inicio){
   while(inicio != NULL){
      cout << inicio->valor <<endl;
      inicio = inicio->proximo;
   }
}

int tam(Node *inicio){
   if(inicio == NULL){
      return 0;
   }
   return 1 + tam(inicio->proximo);
}

Node* insereInicio(Node* inicio,int valor){
   Node* novoNo = new Node();
   novoNo->valor = valor;
   novoNo->proximo = inicio;
   return novoNo;
}