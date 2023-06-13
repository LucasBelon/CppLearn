/* Programa que mostra quanto é o dolar em
 * outras moedas.*/

# include <iostream>
using namespace std;

int main(void){
    float input_value;
    const float britanico = 1.487F;
    const float frances = 0.172F;
    const float alemao = 0.584F;
    const float japao = 0.00955F;
    cout << "Digite quantos dólares você tem: ";
    cin >> input_value;
    cout <<
        "Seu dinheiro convertido: " << endl <<
        "Moeda Britânica: "   <<
        input_value/britanico << endl <<
        "Moeda Francesa: "    <<
        input_value/frances   << endl <<
        "Moeda alemã: "       <<
        input_value/alemao    << endl <<
        "Moeda japonesa: "    <<
        input_value/japao     << endl;
    return 0;
}
