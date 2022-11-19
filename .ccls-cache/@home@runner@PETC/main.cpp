#include <iostream>

using namespace std;

int main() {
  string nome;
  int n;
  int x;
  
  cout << "digite o valor de n: ";
  cin >> n;
  cout << "O número n é: " << n << endl;

  cout << "\nDigite o nome: ";
  cin >> nome;
  cout << "primeiro caracter: " << nome[0] << endl; 
  cout << "tamanho do nome: " << nome.size() << endl;
  cout << "\nDigite a letra x que vai servir de partida para apagar o nome: ";
  cin >> x;
  cout << "Variável sem o caracter das pos x: " << nome.erase(0,x) << endl;
  nome.clear();
  cout << "nome limpo, digite outro: " << nome <<endl;

  string nome2;
  cin.ignore();
  getline(cin, nome2);
  cout << "Novo nome: " << nome2 << endl;

  string nome3, sobrenome;
  cout << "\nDigite o nome e o sobrenome : ";
  cin >> nome >> sobrenome;
  cout << "nome e sobrenome: " << nome + " "+ sobrenome;

}