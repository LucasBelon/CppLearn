/**/

#include <cstdio>
# include <iostream>
using namespace std;

int main(void){
    int chcount = 0;
    int wdcount = 1;
    char ch = 'a';

    cout << "Entre com uma frase: ";
    while( (ch = getchar()) != '\n' ){
        if ( ch == ' ' )
            wdcount++;
        else
            chcount++;
    }
    cout << "Numero de caracteres: " << chcount << endl
        << "Número de palavras: " << wdcount << endl;


    return 0;
}

