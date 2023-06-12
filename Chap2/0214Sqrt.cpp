/* Demonstrando uso de funções
 * de bibliotecas. Com <iostream>
 * usamos um objeto que dispara
 * rotinas de input e output quando
 * interage com outros objetos.*/

# include <cstdlib>
# include <iostream>
# include <cmath>

int main(void){
    double number, answer;
    std::cout << "Enter a Number: ";
    std::cin >> number;
    answer = sqrt(number);
    std::cout << "Raiz do número é: " <<
        answer << std::endl;


    exit(EXIT_SUCCESS);
}
