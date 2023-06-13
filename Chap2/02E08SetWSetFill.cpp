/* Setw sendo usado*/

# include <iostream> // para o cout
# include <iomanip> // para o setw
using namespace std;

int main(void){
    bool booleano = true;
    char caractere = 'a';
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;
    cout <<
        setw(8) << setfill('.') <<
        "LOCATION "             <<
        setw(12) << setfill('.')<<
        "POP."      << endl     <<

        setw(8) << setfill('.') <<
        "Portcity "             <<
        setw(12) << setfill('.')<<
        pop1        << endl     <<

        setw(8) << setfill('.') <<
        "Hightown "             <<
        setw(12) << setfill('.')<< 
        pop2        << endl     <<

        setw(8) << setfill('.') <<
        "Lowville "             <<
        setw(12) << setfill('.')<< 
        pop3        << endl     <<

        setw(8) << setfill('.') << 
        "Mairipopy"             <<
        setw(12) << setfill('.')<< 
        2500        << endl;

    cout <<
        "Tamanho Bool: " <<
        sizeof(booleano) <<
        endl        <<

        "Tamanho Char: "  <<
        sizeof(caractere) <<
        endl;
    return 0;
}

/* Devo admitir que não gostei nem um pouco
 * dessa sintaxe. Parece complicar mais, mas
 * talvez seja apenas falta de costume.
 * Tentei deixar o alinhamento mais estilizado
 * para talvez ficar mais agradável aos olhos,
 * mas não é fácil deixar a saída e sua manipulação
 * bonitas ao mesmo tempo.
 * */
