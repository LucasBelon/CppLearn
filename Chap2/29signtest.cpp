# include <iostream>

using namespace std;

int main(void){
    int varComSinal = 15E8;
    unsigned int varSemSinal = 15E8;

    varComSinal = (varComSinal * 2)/3;
    varSemSinal = (varSemSinal * 2)/3;

    cout << "Com sinal: " << varComSinal << endl;
    cout << "Sem sinal: " << varSemSinal << endl;

    puts("Tivemos problema de overflow\n");

    cout <<
        "Vejamos passo a passo com calma..." << 
        endl;
    varComSinal = 15E8;
    varSemSinal = 15E8;

    cout << "Com sinal: " << varComSinal << endl;
    cout << "Sem sinal: " << varSemSinal << endl;

    varComSinal = (varComSinal * 2);
    varSemSinal = (varSemSinal * 2);

    cout << "Com sinal: " << varComSinal << endl;
    cout << "Sem sinal: " << varSemSinal << endl;

    varComSinal = (varComSinal / 3);
    varSemSinal = (varSemSinal / 3);

    cout << "Com sinal: " << varComSinal << endl;
    cout << "Sem sinal: " << varSemSinal << endl;
    return 0;
}
