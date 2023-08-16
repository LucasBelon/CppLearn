/* Operators such as >>, which read input
 * from the keyboard, must be able to convert 
 * a series of digits into a number. Write a program 
 * that does the same thing. It should allow 
 * the user to type up to six digits, and then 
 * display the resulting number as a type long 
 * integer. The digits should be read individually, 
 * as characters, using getche().  Constructing 
 * the number involves multiplying the existing 
 * value by 10 and then adding the new digit. 
 * (Hint: Subtract 48 or ‘0’ to go from ASCII to 
 * a numerical digit.)
 *
 * Here’s some sample interaction:
 * Enter a number: 123456
 * Number is: 123456
 * */

#include <cstdio>
# include <iostream>
using namespace std;

int main(void){
    long number = 0; // Variável que armazenará o número
    // int digits = 0; // número de algarismos
    int input; // Input definido como int para evitar
               // bugs com multibyte-char

    cout << "Entre com um número: "; // de 6 dígitos:";

    // while(digits<7){ // Versão antiga
    while((input=getchar())!='\n'){
        // digits++;
        input -= '0';
        if (input >= 0 && input <= 9){
            number *= 10;
            number += input;
        }
    }
    cout << "Seu número é: " << number << endl;

    return 0;
}
