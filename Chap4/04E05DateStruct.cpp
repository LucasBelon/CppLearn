/* Create a structure of type date that contains
 * three members: the month, the day of the mont,
 * and the year, all of type int. (Or use day
 * month-year order if you prefer.) Have the user
 * enter a date in the format 12/31/2001, store
 * it in a variable of type struct date, then
 * retrieve the values from the variable and print
 * them out in the same format.*/

# include <iostream>
using namespace std;

/* Elementos:
 * int day - dia [0~31]
 * int month - mês [1~12]
 * int year - ano [MIN_INT~MAX_INT]
 * */
struct DATE {
    int day;
    int month;
    int year;
};

int main(void){
    DATE input_data;
    char descarte;
    cout << "Entre com data no formato DD/MM/AAAA: ";
    cin >> 
        input_data.day >> descarte >>   // DD/
        input_data.month >> descarte >> // MM/
        input_data.year;                // AAAA

    cout << "Você inseriu:" << endl <<
        "Dia: " << input_data.day   << endl <<
        "Mês: " << input_data.month << endl <<
        "Ano: " << input_data.year  << endl ;

    return 0;
}
