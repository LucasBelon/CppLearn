/**/

# include <iostream>
using namespace std;

int main(void){

    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 100)
        cout << "That number is greater than 100" << endl;
    if (x == 100)
        cout << "That number is equal to 100" << endl;
    if (x < 100)
        cout << "That number is less than 100" << endl;

    return 0;
}
