/* Observando conversão de tipos. */

# include <iostream>
using namespace std;
int main(void){
    int count = 7;
    float avgWeight = 155.5F;
    double totalWeight = count * avgWeight;
    cout << 
        "TotalWeight: " <<
        totalWeight <<
        endl;

    return 0;
}
