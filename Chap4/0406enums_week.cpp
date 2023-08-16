/* enums_week.cpp
 * Demonstra o tipo enum.
 * */
# include <iostream>
using namespace std;

enum days_of_week 
    { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

int main(void){
    days_of_week day1, day2; // Definindo variáveis
                             // dos dias da semana
    day1 = Mon;
    day2 = Thu;

    int diff = day2 - day1; // Podemos fazer
                            // aritimética de inteiros
    cout << "Days between = " << diff  << endl;

    if (day1<day2)
        cout << "Day1 comes before day2" << endl;
    cout << "Day1 is: " << day1 << endl;

    return 0;
}

