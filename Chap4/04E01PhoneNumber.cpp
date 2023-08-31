/* A phone number, such as (212) 767-8900, can
 * be thought of as having three parts: the area
 * code (212), the exchange (767), and the number
 * (8900). Write a program that uses a structure
 * to store these three parts of a phone number
 * separately. Call the structure phone. Create
 * two structure variables of type phone. Initialize
 * one, and have the user input a number for the
 * other one. Then display both numbers. The interchange
 * might look like this:
 *
 * Enter your area code, exchange,
 * and number: 415 555 1212
 * My number is (212) 767-8900
 * Your number is (415) 555-1212
 * */

# include <iostream>
using namespace std;

struct PHONE {
    int areaCode;
    int exchange;
    int number;
};

int main (void){
    PHONE meu_fone = {
        .areaCode = 212,
        .exchange = 767,
        .number = 8900
    };

    PHONE seu_fone;
    cout <<
        "Enter your area code, exchange, and number: ";
    cin >>
        seu_fone.areaCode >>
        seu_fone.exchange >>
        seu_fone.number;

    cout << "My number is (" 
        << meu_fone.areaCode 
        << ") " 
        << meu_fone.exchange 
        << ' ' 
        << meu_fone.number 
        << endl;
    cout << "Your number is (" 
        << seu_fone.areaCode
        << ") " 
        << seu_fone.exchange 
        << ' ' 
        << seu_fone.number 
        << endl;
    return 0;
}
