#include "agenda.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
  setlocale(LC_ALL, "Portuguese");
agenda Contato1 = inicio("aaa","aaa",866); //Criando a variável "Contato1" do tipo agenda e lhe atribuindo o retorno da função início
  
  imprimir(Contato1); //Imprimindo a variável Contato1
  
  buscar_contato(&Contato1, "aaa");
  
  alterar_num(&Contato1 /*Enviando o endereço de memória da variável Contato1 para o ponteiro que é parâmetro dessa função*/, 803); 
  alterar_endereco( &Contato1, "Rua esperanto");
  
  alterar_nome(&Contato1,"Hugo");  

  imprimir(Contato1);

  cout << buscar_contato(&Contato1, "Hugo") << endl;

  remover_contato(&Contato1);

  imprimir(Contato1);
  

}