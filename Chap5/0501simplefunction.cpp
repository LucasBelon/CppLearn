# include <iostream>
using namespace std;

void linha_de_estrela(void){
    for (int i = 0; i < 49; i++){
        cout << "*";
    }
    cout << endl;
}

int main(void){
    linha_de_estrela();
    cout << "Data type \t \t Range" << endl;
    linha_de_estrela();
    cout << "char \t \t -128 to 127" << endl
    << "short \t \t -32,768 to 32,767" << endl
    << "int \t \t System dependent" << endl
    << "long \t \t -2,147,483,648 to 2,147,483,647" << endl;
    return 0;
}
