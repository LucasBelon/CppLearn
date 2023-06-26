/**/
# include <iostream>
# include <iomanip>
using namespace std;


int main(void){
    int numb;
    cout << "Enter a number: ";
    cin >> numb;
    cout 
        << "Numb < 10 is: " << (numb<10) << endl
        << "Numb > 10 is: " << (numb>10) << endl
        << "Numb==10 is: " << (numb==10) << endl;
    if (-7)
        cout << "-7 is true" << endl;
    if (!(0))
        cout << "0 is false" << endl;
    if (7)
        cout << "7 is true" << endl;

    return 0;
}
