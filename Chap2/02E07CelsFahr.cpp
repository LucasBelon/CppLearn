/* Programa que converte de Celsius pra fahrenheit.
 * */

# include <iostream>
using namespace std;

int main(void){
    float input_value;
    cout << 
        "Digite a temperatura em Graus Celsius: ";
    cin >> input_value;
    float Fahr = (input_value*9/5) + 32;
    cout << 
        "A temperatura equivalente em Fahrenheit é: "
        << Fahr << endl;
    return 0;
}
