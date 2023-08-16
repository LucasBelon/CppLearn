/* Write a temperature-conversion program
 * that gives the user the option of 
 * converting Fahrenheit to Celsius or 
 * Celsius to Fahrenheit. Then carry out
 * the conversion. Use floating-point
 * numbers. Interaction with the program
 * might look like this:
 *
 * Type 1 to convert Fahrenheit to Celsius,
 * 2 to convert Celsius to Fahrenheit: 1
 * Enter temperature in Fahrenheit: 70
 * In Celsius that’s 21.111111
 * */

# include <iostream>
# include <iomanip>
using namespace std;

int main(void){
    int option;
    float temperature;
    cout << "Escreva 1 para converter de\n\
           \rFahrenheit para Celsius,\n\
           \r2 para converter de Celsius\n\
           \rpara Fahrenheit:";

    cin >> option;
    if (option-1){
        cout << "Entre com a temperatura em Celsius:";
        cin >> temperature;
        temperature = (temperature * 9 / 5) + 32;
        cout << "Essa temperatura em Fahrenheit é "
             << temperature << "°F" << endl ;
    }
    else {
        cout << "Entre com a temperatura em Fahrenheit:";
        cin >> temperature;
        temperature = (temperature - 32) * 5 / 9 ;
        cout << "Essa temperatura em Celsius é "
             << temperature << "°C" << endl ;
    }
    return 0;
}
