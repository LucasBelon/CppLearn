/* */

#include <cstdint>
# include <iostream>
using namespace std;

int main(void){
    int IntVar = 1500000000;
    IntVar = (IntVar * 10) / 10;
    cout << "IntVar: " << IntVar << endl;
    //cout << "MaxInt: " << INTMAX_MAX << endl;

    IntVar = 1500000000;
    IntVar = (static_cast<double>(IntVar) * 10) / 10;
    cout << "IntVar: " << IntVar << endl;
    return 0;
}

/* Se eu já não gostava de uns detalhes de sintaxe...
 * A justificativa para mudar o (char) A pra
 * static_cast<char>(A) é por ter o significado
 * mais óbvio e ser mais fácil de encontrar usando
 * mecanismos de busca.*/ 
