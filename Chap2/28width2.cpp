/* Setw sendo usado*/

# include <iostream> // para o cout
# include <iomanip> // para o setw

int main(void){
    bool booleano = true;
    char caractere = 'a';
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;
    std::cout <<
        std::setw(8) << "LOCATION " <<
        std::setw(12) << "POP." <<
        std::endl <<
        
        std::setw(8) << "Portcity " << 
        std::setw(12) << pop1 <<
        std::endl << 
        
        std::setw(8) << "Hightown " <<
        std::setw(12) << pop2 <<
        std::endl <<

        std::setw(8) << "Lowville " <<
        std::setw(12) << pop3 << 
        std::endl;

    std::cout << "Tamanho Bool: "
        << sizeof(booleano)
        << std::endl;
    std::cout << "Tamanho Char: "
        << sizeof(caractere) << std::endl;
    return 0;
}

/* Devo admitir que não gostei nem um pouco
 * dessa sintaxe. Parece complicar mais, mas
 * talvez seja apenas falta de costume.*/
