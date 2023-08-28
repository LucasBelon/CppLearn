/* Create a four-function calculator for fraction.
 * (See Exercise 9 in Chapter 2, and Exercise
 * 4 in this chapter.) Here are the formulas for
 * the four arithmetic operations applied to fractions:
 *
 * Addition:       a/b + c/d = (a*d + b*c) / (b*d)
 * Subtraction:    a/b - c/d = (a*d - b*c) / (b*d)
 * Multiplication: a/b * c/d = (a*c) / (b*d)
 * Division:       a/b / c/d = (a*d) / (b*c)
 *
 * The user should type the first fraction, an
 * operator, and a second fraction. The program
 * should then display the result and ask whether
 * the user wants to continue.*/

# include <iostream>
using namespace std;

int main(void){
    int frac1_dividendo,
        frac1_divisor,
        frac2_dividendo,
        frac2_divisor,
        result_dividendo,
        result_divisor;
    char operation;
    char descarte;
    int parar;
    do{
        cout << "Escolha a operação: {+|-|*|/}: ";
        cin >> operation;
        cout << "Escreva a primeira fração [a/b]: ";
        cin >> frac1_dividendo >> descarte >> frac1_divisor;
        cout << "Escreva a segunda fração [c/d]: ";
        cin >> frac2_dividendo >> descarte >> frac2_divisor;
        switch (operation) {
            case '+':
                result_dividendo = 
                    frac1_dividendo*frac2_divisor + 
                    frac2_dividendo*frac1_divisor;
                result_divisor =
                    frac1_divisor * frac2_divisor;
                break;
            case '-':
                result_dividendo = 
                    frac1_dividendo*frac2_divisor - 
                    frac2_dividendo*frac1_divisor;
                result_divisor =
                    frac1_divisor * frac2_divisor;
                break;
            case '*':
                result_dividendo = 
                    frac1_dividendo*frac2_dividendo;
                result_divisor =
                    frac1_divisor*frac2_divisor;
                break;
            case '/':
                result_dividendo = 
                    frac1_dividendo*frac2_divisor;
                result_divisor =
                    frac1_divisor*frac2_dividendo;
                break;
            default:
                cout << "Operador válido não identificado"<< endl;
        }
        cout << "A fração resultado é: " << result_dividendo << "/" << result_divisor << endl;
        cout << "Digite 1 para parar, 0 para contunuar: ";
        cin >> parar;
    } while(parar !=1);
    return 0;
}

