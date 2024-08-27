#include <iostream>
#include "fila.h"
using namespace std;

void Emfileira(TipoItem* x, TipoFila *Fila){
    if (Fila->total == MAXTAM){
        cout << "Erro: Fila cheia" << endl;
    } else {
        Fila->Item[Fila->fim] = x;
        Fila->total = Fila->total + 1;
        Fila->fim = (Fila->fim + 1) % MAXTAM;
    }
}

int ImprimirTamanho(TipoFila *Fila){
    return Fila->total;
}