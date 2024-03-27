#include <iostream> // Incluindo a biblioteca de entrada e saída do sistema

using namespace std; // Usando a biblioteca padrão do c++ para nomes de variáveis 

int main(){ // Criando a função main que retornará um inteiro se der certo

    cout << "Digite um numero" << endl; //Printando

    int num; // Criando a variável que receberá dados do usuário

    int i = 0; // Criando e inicializando a variável de loop "i"

    cin >> num; // Recebendo os dados do usuário na variável num

    while(i <= num){ // Começando um loop while com a condição de que i seja menor ou igual a num // O Laço "for" tem a mesma sintaxe de java
        if (num > 1000){ // Se num for maior que 1000
            cout << "Digite um numero menor" << endl;
            break; // O loop será quebrado
        }
        else{ // se não
            cout << i << endl;
            i++; 
        }
    }
    return 0; // Retorne 0 se nenhum erro for encontrado
}
