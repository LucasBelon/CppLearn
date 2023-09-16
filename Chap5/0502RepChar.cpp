/* Demonstração de função com valor
 * de parâmetros não nulos.
 * */

# include <iostream>
using namespace std;
/* Função que imprime n vezes */
void repchar(char, int); // Declaração

int main(void){
    repchar('-', 43);
    cout << "Data type Range" << endl;
    repchar('=', 43); //call to function
    cout << "char -128 to 127" << endl
        << "short -32,768 to 32,767" << endl
        << "int System dependent" << endl
        << "double -2,147,483,648 to 2,147,483,647" << endl;
    repchar('-', 43);
    return 0;
}

void repchar(char ch, int n) // Definição
{ // Corpo da função
  for(int i = 0; i < n; i++)
      cout << ch;
  cout << endl;
}
