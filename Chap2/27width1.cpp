/* Assim como temos os especificadores de tamanho
 * de campo como por exemplo
 * print("%05d\n", inteiro);
 * ou mesmo
 * print("%2.5f\n",float);
 * existe em C++ o especificador de largura de campo.
 * Também tem tipo booleano, que tem tamanho 1 byte,
 * igual ao tipo char.
 * */

# include <iostream>

int main(void){
    bool booleano = true;
    char caractere = 'a';
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;
    std::cout << "LOCATION " << "POP." << std::endl
              << "Portcity " << pop1   << std::endl
              << "Hightown " << pop2   << std::endl
              << "Lowville " << pop3   << std::endl;
    std::cout << "Tamanho Bool: "
        << sizeof(booleano)
        << std::endl;
    std::cout << "Tamanho Char: "
        << sizeof(caractere) << std::endl;
    return 0;
}
