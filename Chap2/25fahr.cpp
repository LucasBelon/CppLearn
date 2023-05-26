/* */

# include <iostream>
using namespace std;

int main(void){
    int ftemp ;
    cout << "Enter temperature in fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp-32) * 5 / 9;
    cout << "Celsius equivalent: " << ctemp << '\n';
    return 0;
}
