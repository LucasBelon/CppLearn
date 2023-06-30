/**/

# include <iomanip>
# include <iostream>
using namespace std;

int main(void){
    int pow = 1;
    int num = 1;

    while( pow < 10000){
        cout << setw(2) << num;
        cout << setw(5) << pow << endl;
        num++ ;
        pow = num * num * num * num;
    }
    cout << endl;

    return 0;
}
