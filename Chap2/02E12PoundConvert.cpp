/* Numa notação britânica antiga...
 * Um pound valia 20 shillings.
 * Um shilling valia 12 pences (plural de penny)
 * A notação era £2.19.11, ou seja,
 * 2 pounds, 19 shillings e 12 pences
 * No novo sistema existem apenas pounds e pence,
 * com 100 pence sendo um pound.
 * Escreva um programa que converte do sistema
 * novo para o antigo.
 * */
# include <iostream>
using namespace std;

int main(void){
    float new_pounds;
    int shillings, pence ;
    float dec_pound, int_pound;

    cout << "Enter decimal pounds: ";
    cin >> new_pounds ;

    int_pound = static_cast<int>(new_pounds);
    dec_pound = (new_pounds - int_pound)*20 ;

    shillings = static_cast<int>(dec_pound);;
    pence = static_cast<int>(
            (dec_pound - shillings)*12
            );

    cout << "Old Pounds: £" << int_pound <<
        "." << shillings << 
        "." << pence << endl;

    return 0;
}
