// intvars.cpp
// Demonstra variáveis inteiras

# include <iostream>
#include <sys/types.h>
using namespace std;

void
int_test(void)
{
    // Alguns compiladores oferecem inteiros com
    // a quantidade de bits já definidos.
    u_int8_t a = -2; // 255
    u_int16_t b = 2; // 65535
    u_int32_t c = 2; // 4294967295
    u_int64_t d = 2; // 18446744073709551615
    // Lembrando que podem ser com ou sem sinal.
    // Caso seja com sinal, a capacidade é dividida
    // para comportar metade negativa e metade positiva.
}


int main(void){
    int var1;
    int var2;
    var1 = 20;
    var2 = 10 + var1;
    cout << "var1+10 is ";
    cout << var2 << endl;
    return 0;
}

/* Lembrete: Cada módulo compilado tem seus nomes
 * pertencentes a uma unidade de tradução. Alguns
 * compiladores irão te dar a capacidade de anexar
 * ao nome de uma função do arquivo x1.cpp um hash,
 * nos permitindo utilizar o mesmo nome para uma
 * função do arquivo x2.cpp
 * */
/* O endl é algo chamado "manipulador". Existem outros
 * nessa família. O que ele faz é alimentar uma linha
 * no stdout, e também causa o flush do buffer (isso
 * pode causar problemas de performance). Esses
 * manipuladores são úteis no caso de evitar-se
 * especificidades de plataforma. Um exemplo seria a
 * necessidade de inserção de um CR (carriage return,
 * retorno de carro). Não é interessante ficar dependente
 * de conhecer especificidades de plataformas para
 * desenvolver um bom código.
 * */
