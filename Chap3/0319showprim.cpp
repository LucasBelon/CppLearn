/* Show primes. */
# include <iostream>
using namespace std;

int main(void){
    const unsigned char WHITE = 219;
    const unsigned char BLACK = 176;
    unsigned char ch;

    for (int count = 0; count < 80*25-1; count++){
        ch = WHITE;
        for (int j = 2; j < count; j++){
            if (count % j == 0){
                ch = BLACK;
                break;
            }
        }
        cout << ch;
    }
    getchar();

    return 0;
}
