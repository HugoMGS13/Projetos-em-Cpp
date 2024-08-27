#include <iostream>
#include "fila.h"
using namespace std;

int main(){
    // Alocação e inicialização da fila
    TipoFila* Fila = new TipoFila;
    Fila->inicio = 0;
    Fila->fim = 0;
    Fila->total = 0;

    // Criação e inicialização do item
    TipoItem* Item = new TipoItem;
    Item->valor = 1;  // Supondo que 'valor' é um campo de TipoItem

    // Inserção do item na fila
    Emfileira(Item,Fila);

    // Função para imprimir o tamanho da fila
    ImprimirTamanho(Fila);

    // Liberação da memória
    delete Item;
    delete Fila;

    return 0;
}
