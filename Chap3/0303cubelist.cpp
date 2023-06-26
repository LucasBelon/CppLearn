/**/

# include <iostream>
# include <iomanip>
using namespace std;


int main(void){
    int numb;
    for (numb=1; numb <= 10; numb++){
        cout << setw(4) << numb;
        int cube = numb*numb*numb;
        cout << setw(6) << cube << endl;
    }
    // cout << cube << endl; undefined identifier cube.
    return 0;
}

/* O loop, do ponto de vista do escopo,
 * atuam como funções. Variáveis declaradas
 * dentro dele só são visíveis dentro dele.
 * */
