#include <iostream>
#include "agenda.h"
using namespace std;

agenda inicio(string nome, string endereco, int nmr){
    agenda Minhaagenda; //Criando a variável
    Minhaagenda.name = nome; //Mudando os campos da variável 
    Minhaagenda.endereco = endereco;
    Minhaagenda.nmr = nmr;

    return Minhaagenda;
}

void imprimir(agenda Minhaagenda){
    cout << "Nome: " << Minhaagenda.name << " Endereço: "<< Minhaagenda.endereco << " Número: " << Minhaagenda.nmr << endl;
}

void alterar_nome(agenda* Minhaagenda /* Criando um ponteiro que irá receber um endereço de variável */, string nome){
  Minhaagenda->name = nome;
}

void alterar_num(agenda* Minhaagenda, int nmr){
  Minhaagenda->nmr = nmr; //Apontando para o campo nmr da variável que está sendo passada pelo endereço do parâmetro
}

void alterar_endereco(agenda* Minhaagenda, string endereco){
  Minhaagenda->endereco = endereco;
}

string buscar_contato(agenda* Minhaagenda, string nome){
  if (Minhaagenda->name == nome){
    return "Contato encontrado";
  }
  else{
    return "Contato não encontrado";
  }
}

void remover_contato(agenda* Minhaagenda){
  Minhaagenda->name = "";
  Minhaagenda->endereco= "";
  Minhaagenda->nmr = 0;
}