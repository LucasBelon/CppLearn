/* Estuturas são interessantes para entendimento
 * de Objetos, e por isso sâo apresentadas cedo.
 * Ainda não se falou de ponteiros, de estruturas
 * recursuvas, mas tudo bem.*/

# include <iostream>
using namespace std;

/* O jeito que se definem estruturas
 * é diferente entre C e C++. Nada de 
 * estrutura nomeada e rotulada, só
 * dizer que é estrutura, e que tem um nome.*/
struct part {
    int model_number;
    int part_number;
    float cost;
} ;


int main(void){
    // Em relação ao C, perceber a ausência
    // da palavra-chave struct na criação da
    // variável part1.
    part part1;
    part1.model_number = 3260;
    part1.part_number = 567;
    part1.cost = 217.65F;

    cout << "Model " << part1.model_number;

    cout << ", part " << part1.part_number;

    cout << ", costs $" << part1.cost << endl;

    // Vamos ver se uma forma alternativa pode
    // ser usada
    part1 = {
        .model_number = 55,
        .part_number = 765,
        .cost = 55.66F
    };

    cout << "Model " << part1.model_number;

    cout << ", part " << part1.part_number;

    cout << ", costs $" << part1.cost << endl;
    // funciona
    return 0;

}
