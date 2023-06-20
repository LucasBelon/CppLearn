/* Escreva um programa que gera um output
 * específico:*/

# include <iostream>
# include <iomanip>
using namespace std;


int main(void){
    cout << 
        setw(11) << 
        setiosflags(ios::left) << 
        "Last Name" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "First Name" <<

        setw(18) << 
        setiosflags(ios::left) << 
        "Street address" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Town" <<

        setw(5) << 
        setiosflags(ios::left) << 
        "State" <<

        endl <<

        "------------------------------------------------------------" <<

        endl <<

        setw(11) << 
        setiosflags(ios::left) << 
        "Jones" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Bernard" <<

        setw(18) << 
        setiosflags(ios::left) << 
        "109 Pine Lane" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Littletown" <<

        setw(5) << 
        setiosflags(ios::left) << 
        "MI" <<

        endl <<

        setw(11) << 
        setiosflags(ios::left) << 
        "O'Brian" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Coleen" <<

        setw(18) << 
        setiosflags(ios::left) << 
        "42 E. 99th Ave." <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Bigcity" <<

        setw(5) << 
        setiosflags(ios::left) << 
        "NY" <<

        endl <<

        setw(11) << 
        setiosflags(ios::left) << 
        "Wong" <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Harry" <<

        setw(18) << 
        setiosflags(ios::left) << 
        "121-A Alabama St." <<

        setw(13) << 
        setiosflags(ios::left) << 
        "Lakeville" <<

        setw(5) << 
        setiosflags(ios::left) << 
        "IL" <<

        endl;

    return 0;
}
