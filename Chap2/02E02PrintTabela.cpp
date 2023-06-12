/* Faça um programa que gera a seguinte
 * tabela:
 * 1990   135
 * 1991  7290
 * 1992 11300
 * 1993 16200
 * Utilize apenas uma chamada a cout.
 * */

# include <iomanip>
# include <iostream>
using namespace std;

int main(void){
    cout << "1990" << setw(7) << 135   << endl
         << "1991" << setw(7) << 7290  << endl
         << "1992" << setw(7) << 11300 << endl
         << "1993" << setw(7) << 16200 << endl;
    return 0;
}

