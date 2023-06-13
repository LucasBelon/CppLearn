/* Usando a função de biblioteca
 * isalpha, que retorna zero ou
 * não zero para uma letra, faça um
 * programa que pede ao usuário
 * uma entrada e mostre a saída desta 
 * função.
 * */

#include <bits/ctype_inlines.h>
# include <iostream>
using namespace std;


int main(void){
    char input_char;
    cout << "Digite um caractere: ";
    cin >> input_char;
    cout << isalpha(input_char);
    return 0;
}
