/**/
# include <iostream>
using namespace std;

int main(void){
    int x;

    cout << "Entre com um número: ";
    cin >> x;
    if ( x > 100)
        cout << "Maior que 100" << endl;
    else
        cout << "Não maior que 100";

    return 0;
}
