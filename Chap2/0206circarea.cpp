/* */

# include <iostream>
using namespace std;
# define PI 3.1415926F

int main(void){
    float raio;
    const float numero_pi = PI;
    cout << "Me diga qual será o raio: ";
    cin >> raio;
    float area = numero_pi * raio * raio;
    cout << "A área é: " << area << endl ;

    return 0;
}

/* A razão para se explicitar o tipo
 * de Pi é para evitar conversões desnecessárias e
 * para garantir precisões esperadas. Quando
 * o número é lido pelo compilador, ele é tratado
 * como double. Portanto, é também uma boa prática.*/
