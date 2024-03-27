#include <string> //
using namespace std; // Usando a biblioteca padrão de nomes do C++

int main() { // Criando uma função main que retorna um inteiro
	
	setlocale(LC_ALL,"Portuguese"); // Usando a linguagem portuguesa no código
	
	int num; // Criando a variável do tipo inteiro chamada "num"
	
	cout << "Digite um número" <<; // Dizendo para o usuário digitar um número
	
	cin >> num; // Dizendo que num irá receber dados do usuário, usando a keyword "cin"
	
	if (num % 2 == 0){
		cout<< "Par" << endl;
	}
	else{
		cout << "Não-par" << endl;
	}
	return 0; // Retorna 0 se o código funcionar
}
