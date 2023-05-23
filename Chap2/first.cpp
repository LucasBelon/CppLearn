#include <iostream>
/* Bibliotecas ainda podem ser usadas, mas as mais
 * recentes não usam a extensão ".h".
 * Existe uma nova lógica que afeta os escopos, de forma
 * que compilar com múltiplos arquivos pode ser diferente.
 * Um exemplo de ferramenta para lidar com isso é o using
 * namespace.*/
//using namespace std;

int main(void){
    std::cout << "HELLO WORLD!!\n";
    /* O C++ tem uma biblioteca padrão, e como é uma
     * linguagem que permite alterar o comportamento
     * padrão de operadores, é importante representar
     * a origem de um objeto. "cout" é um objeto da
     * biblioteca padrão que representa o stdout, de
     * tal forma que podemos redirecionar uma string
     * para ele.*/
    //cout <<"Every Age has a Language\n";
    /* O operador "<<" é originalmente um operador
     * bitwise, mas o objeto responde à essa operaçâo
     * de uma forma diferente.*/
    return 0;
}

/* Os compiladores disponíveis são o g++ ou o clang++.
 * Ainda não sei se a melhor ferramenta para gerenciar
 * projetos é o Make. 
 * Enquanto trabalho com arquivos simples, vou utlizar,
 * como exemplo nesse arquivo, o make first.
 * */
