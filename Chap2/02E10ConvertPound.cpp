/* Numa notação britânica antiga...
 * Um pound valia 20 shillings.
 * Um shilling valia 12 pences (plural de penny)
 * A notação era £2.19.11, ou seja,
 * 2 pounds, 19 shillings e 12 pences
 * No novo sistema existem apenas pounds e pence,
 * com 100 pence sendo um pound.
 * Escreva um programa que converte do sistema
 * antigo para o novo.
 * */
# include <iostream>
using namespace std;

int main(void){
    float pounds, shillings, pence ;
    const float pence_to_pound = 
        (12.0F * 20.0F);
    cout << "Enter pounds: ";
    cin >> pounds ;
    cout << "Enter shillings: ";
    cin >> shillings ;
    cout << "Enter pence: ";
    cin >> pence ;

    pence += (shillings * 12);
    // convertendo os shillings para pence

    pounds += pence / pence_to_pound;
    // convertendo os pence adicionado de shilling
    // para pound.
    cout << "Decimal Pounds: £" << pounds << endl;

    return 0;
}
