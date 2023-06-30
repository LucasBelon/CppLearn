/**/

# include <iostream>
using namespace std;

int main(void){
    const unsigned long limit = 3294967294.0/2 ;
    int next = 1;
    int last = 0;
    while ( next < limit){
        cout << last << " " ;
        long sum = next + last;
        next = last;
        last = sum;
    }
    cout << endl;
    return 0;
}
