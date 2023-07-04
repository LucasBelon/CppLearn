/**/

# include <iostream>
using namespace std;

int main(void){
    long dividendo, divisor;
    char ch;

    do {
        cout << "Entre com dividendo: " ; 
        cin >> dividendo;
        cout << "Entre com divisor: " ; 
        cin >> divisor;
        cout << "Quociente: " << dividendo/divisor 
            << endl; 
        cout << "Continuar? [s/n]; " << endl;
        cin >> ch;
    }
    while(ch != 'n');

    return 0;
}
