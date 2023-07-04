/**/

# include <iostream>
using namespace std;

int main(void){
    unsigned long n, j;
    cout << "Enter a number: ";
    cin >> n;
    for (j = 2; j <= n/2; ++j){
        if (n%j == 0){
            cout << "It's not prime" << endl <<
                "Divisible by " << j << endl;
            exit(0);
        }
    }
    cout << "its prime" << endl;


    return 0;
}
