/* Operadores matenáticos de atribuição.
 * Operadores de incremento e decrememnto.*/

#include <cstdlib>
# include <iostream>
using namespace std;

int main(void){
    int ans = 27;
    cout << ans << ", ";

    ans = ans - 10;
    cout << ans << ", ";

    ans += 10; // O mesmo que ans = ans + 10;
    cout << ans << ", ";
    ans -= 7;
    cout << ans << ", ";
    ans *= 2;
    cout << ans << ", ";
    ans /= 3;
    cout << ans << ", ";
    ans %= 3;
    cout << ans << endl;


    int count = 10;
    cout << "Contador: " << count << endl;
    cout << "Contador: " << ++count << endl;
    cout << "Contador: " << count << endl;
    cout << "Contador: " << count-- << endl;
    cout << "Contador: " << count << endl;

    exit(EXIT_SUCCESS);
}
