/* 5. Use for loops to construct a program that 
 * displays a pyramid of Xs on the screen. The
 * pyramid should look like this
 *     X
 *    XXX
 *   XXXXX
 *  XXXXXXX
 * XXXXXXXXX
 * except that it should be 20 lines high, instead 
 * of the 5 lines shown here. One way to do this 
 * is to nest two inner loops, one to print spaces 
 * and one to print Xs, inside an outer loop 
 * that steps down the screen from line to line.  */

# include <iostream>
using namespace std;

int main(void){
    // Caracteres da piramide
    char spaces = ' ';
    char fulfill = 'x';

    // Dimensões da pirâmide
    int linesnumber = 30; // Número de linhas
    int linesize = linesnumber*2 + 1; // Número de colunas

    for(int line=0; line <= linesnumber; line++){
        // Quantidade de espaços para essa linha
        int space = (linesize-2*line)/2;
        // Quantidade de caracteres para essa linha
        int character = linesize - 2*space;

        // Faz espaços na esquerda, preenche o meio
        // e adiciona espaços na direita.
        // É útil pra se ter visualizados outros
        // caracteres. Basta brincar com spaces e fulfill.
        for(int ch=0; ch < space; ch++)
            cout << spaces;
        for (int ch=0; ch < character; ch++)
            cout << fulfill;
        for(int ch=0; ch < space; ch++)
            cout << spaces;

        cout << endl;

    }
    return 0;
}
