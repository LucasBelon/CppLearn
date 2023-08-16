/* Demonstrando o uso do switch. */

# include <iostream>
using namespace std;

int main(void){
    int speed;

    cout << "Enter 33, 45 or 78: ";
    cin >> speed;
    switch(speed){
        case (33):
            cout << "Enter album\n";
            break;
        case (45):
            cout << "Single selection\n";
            break;
        case (78):
            cout << "Obsolete format\n";
            break;
        default:
            cout << "None valid operation";
            break;
    }
    return 0;
}
