#include <iostream>
#include <string>
using namespace std;

#define MAXTAM 1000

typedef int Total;
typedef int Apontador;
typedef int Valor;

typedef struct{
    Valor valor;
}TipoItem;

typedef struct{
    TipoItem Item[MAXTAM];
    Apontador inicio, fim;
    Total total;
} TipoFila;

void Emfileira(TipoItem* x, TipoFila *Fila);

int ImprimirTamanho(TipoFila *Fila);