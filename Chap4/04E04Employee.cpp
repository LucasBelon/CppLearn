/* Create a structure called employee that contains
 * two members: an employee number (type int)
 * and the employee’s compensation (in dollar;
 * type float). Ask the user to fill in this
 * data for three employees, store it in three
 * variables of type struct employee, and then
 * display the information for each employee.*/

# include <iostream>
using namespace std;

/* int numb: id number
 * float compensation: Money he get's*/
struct EMPLOYEE {
    int numb;
    float compensation;
};

// Estou sem muita paciência, vou usar conhecimentos
// sobre listas ainda não abordados.

int main (void)
{
    EMPLOYEE man[3];
    man[0].numb = 1;
    man[1].numb = 2;
    man[2].numb = 3;
    for (int i=0;i<3;++i){
        cout << "Enter the compensation for employee "
        << i+1 << ": ";
        cin >> man[i].compensation;
    }
    for (int i=0;i<3;++i){
        cout << "Employee "<<i+1<<": "<<
            man[i].numb << " - " <<
            man[i].compensation << endl;
    }

    return 0;
}
