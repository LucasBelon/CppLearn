/* Demonstrando problemas com qual
 * else está ligado à qual if. 
 * A lógica está uma porcaria, mas
 * a ideia de qual if ebcaixa com qual
 * else, e o uso de chaves é o foco do
 * código. */

#include <cstdio>
# include <iostream>
using namespace std;

int testeIf01(void){
    puts("Testando if forma 01\n");
    int a, b, c;
    cout << "Insira três números: a, b e c" << endl;
    cin >> a >> b >> c;
    if (a==b)
        if (b==c)
            cout << "a, b e c são os mesmos" << endl;
    else
        cout << "a e b são diferentes" << endl;
    return 0;
}


int testeIf02(void){
    puts("Testando if forma 02\n");
    int a, b, c;
    cout << "Insira três números: a, b e c" << endl;
    cin >> a >> b >> c;
    if (a==b)
        if (b==c)
            cout << "a, b e c são os mesmos" << endl;
        else
            cout << "b e c são diferentes" << endl;
    return 0;
}


int testeIf03(void){
    puts("Testando if forma 03\n");
    int a, b, c;
    cout << "Insira três números: a, b e c" << endl;
    cin >> a >> b >> c;
    if (a==b)
    {
        if (b==c)
            cout << "a, b e c são os mesmos" << endl;
    }
    else
        cout << "b e c são diferentes" << endl;
    return 0;
}



int main(void){
    testeIf01();
    testeIf02();
    testeIf03();
    return 0;
}
