/* Enunciado: 
 * Assuma que existem 7481 galões em
 * um pé cúbico. Escreva um programa que
 * pede ao usuário que insira o número
 * de galões e mostre quanto é isso em
 * pés cúbicos.
 * */

# include <cstdlib>
# include <iostream>
using namespace std;

int main(void){
  const double rel =
      static_cast<double>(1) / 7481 ;
  // Definindo a constante que transforma
  // galões em pés cúbicos. Usando casting
  // pra ver se me acostumo com essa sintaxe
  // que me parece tão mas tão feia.

  double galoes; // Variável input

  cout << "Digite o número de galões: " <<
      endl; // Prompt de inserção


  cin >> galoes; // Armazenamento


  cout << "O equivalente em pés cúbicos é: " <<
      galoes * rel << endl; // output com resultado


  exit(EXIT_SUCCESS);
}
