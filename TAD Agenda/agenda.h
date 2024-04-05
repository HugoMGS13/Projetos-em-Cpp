#include <string>
using namespace std;

typedef struct{
    string name;
    string endereco;
    int nmr;
}agenda;

agenda inicio(string,string,int);
void imprimir(agenda);
void alterar_nome(agenda* Minhaagenda,string);
void alterar_num(agenda* Minhaagenda,int);
void alterar_endereco(agenda* Minhaagenda,string);
string buscar_contato(agenda* Minhaagenda, string nome);
void remover_contato(agenda* Minhaagenda);