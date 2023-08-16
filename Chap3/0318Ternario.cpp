/* Exemplo de uso do operador ternário.
 * */

# include <iostream>
using namespace std;

int main(void){
    char caractere;
    for (int j = 0; j< 80; j++){
        caractere = (j%8)? ' ' : 'x';
        cout << caractere;
    }
    cout << endl;
    return 0;
}
