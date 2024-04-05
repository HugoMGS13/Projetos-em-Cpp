#include "jogador.h"
#include <iostream>
using namespace std;

jogador inicializar(string nome, string posi, int idade, int chute, int drible, int defesa, int velocidade){
  jogador Jogador;
  Jogador.nome = nome;
  Jogador.posi = posi;
  Jogador.idade = idade;
  Jogador.chute = chute;
  Jogador.drible = drible;
  Jogador.defesa = defesa;
  Jogador.velocidade = velocidade;

  return Jogador;
}

void printar(jogador Jogador){
  cout << "Nome: " << Jogador.nome << " Posição: " << Jogador.posi << " Idade: " << Jogador.idade << endl;
}