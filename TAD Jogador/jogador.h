#include <string>
using namespace std;


typedef struct{
  string nome;
  string posi;
  int idade;
  int chute;
  int drible;
  int defesa;
  int velocidade;
}jogador;

jogador inicializar(string, string,int,int,int,int,int);
void printar(jogador);