/* */

# include <iostream>
using namespace std;

int main(void){
    int div1, denom1,
        div2, denom2,
        div3, denom3;
    char barra;
    cout << "Entre com a primeira fracão: ";
    cin >> denom1 >> barra >> div1;
    cout << "Entre com a segunda fracão: ";
    cin >> denom2 >> barra >> div2;
    div3 = div1*div2;
    denom3 = div1*denom2 + div2*denom1;
    cout << "O resultado da soma é: "
        << denom3 << barra << div3 << endl;


    return 0;
}
