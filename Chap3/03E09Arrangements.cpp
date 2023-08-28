/* Suppose you give a dinner party for six guests,
 * but your table seats only four. In how many 
 * ways can four of the six guests arrange themselves 
 * at the table? Any of the six guests can sit 
 * in the first chair. Any of the remaining five
 * can sit in the second chair. Any of the remaining
 * four can sit in the third chair, and any of
 * the remaining three can sit in the fourth chairs
 * (The last two will have to stand.) So the
 * number of possible arrangements of six guests
 * in four chairs is 6*5*4*3, which is 360. Write
 * a program that calculates the number of possible
 * arrangements for any number of guests and any
 * number of chairs. (Assume there will never
 * be fewer guests than chairs.) Don’t let this
 * get too complicated. A simple for loop should
 * do it.*/

# include <iostream>
using namespace std;

int main(void){
    int seats;
    int guests;
    int combination = 1;
    cout << "Digite o número de assentos: ";
    cin >> seats;
    cout << "Digite o número de convidados: " ;
    cin >> guests;
    if (guests < seats){
        cout << 
            "O número de convidados não pode ser\n\
           \rmenor do que o número de cadeiras.\n\
           \rTerminando programa"
           << endl;
        return 0;
    }
    for (int i = seats; i > 0; i--){
        combination *= guests;
        guests--;
    }
    cout << "The combinations are: " 
         << combination << endl;

    return 0;
}
