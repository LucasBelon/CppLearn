/* Add a variable of type enum etype (see Exercise
 * 6), and another variable of type struct date
 * (see Exercise 5) to the employee class of Exercise
 * 4. Organize the resulting program so that the
 * user enters four items of information for each
 * of three employees: an employee number, the
 * employee’s compensation, the employee type,
 * and the date of first employment. The program
 * should store this information in three variables
 * of type employee, and then display their contents.
 * */

# include <iostream>
using namespace std;

/* Interpretar como um inteiro limitado a assumir
 * apenas 6 valores. De 0 a 5 */
enum ETYPE { 
    laborer,
    secretary, 
    manager, 
    accountant, 
    executive, 
    researcher
};

/* Elementos:
 * int day      - dia [0~31]
 * int month    - mês [1~12]
 * int year     - ano [MIN_INT~MAX_INT]
 * */
struct DATE {
    int day;
    int month;
    int year;
};

/* int numb:            id number.
 * float compensation:  Money he get's.
 * ETYPE type:          Employee type (function).
 * DATE date:           When he started working.
 * */
struct EMPLOYEE {
    int numb;
    float compensation;
    ETYPE type;
    DATE date;
};

int main(void){
    char descarte;
    unsigned char opt;
    EMPLOYEE man[3];
    man[0].numb = 1;
    man[1].numb = 2;
    man[2].numb = 3;

    // Input de cada uma das infos para cada um dos
    // empregados.
    for (int i=0;i<3;++i){
        // Input do salário do empregado.
        cout << "Insira o salário do empregado "
        << i+1 << ": ";
        cin >> man[i].compensation;

        // Input do tipo de função na empresa.
        cout << "Escolha dentre as opções: [l,s,m,a,e,r]:";
        cin >> opt;
        switch(opt){
            case 'l': man[i].type = laborer    ; break;
            case 's': man[i].type = secretary  ; break;
            case 'm': man[i].type = manager    ; break;
            case 'a': man[i].type = accountant ; break;
            case 'e': man[i].type = executive  ; break;
            case 'r': man[i].type = researcher ; break;
            default: break;
        }

        // Input da data de ingresso na empresa.
        cout << "Entre com data no formato DD/MM/AAAA: ";
        cin >> 
            man[i].date.day >> descarte >>   // DD/
            man[i].date.month >> descarte >> // MM/
            man[i].date.year;                // AAAA
        }


    // Ouput de cada uma das infos para cada um dos
    // empregados.
    for (int i=0;i<3;++i){
        // Output do salário do empregado.
        cout << "Empregado "<<
            man[i].numb << " Recebe: R$" <<
            man[i].compensation << endl;
        
        // Output do tipo de funçâo na empresa.
        cout << "Trabalha como: ";
        switch(man[i].type){
            case laborer   : cout << "laborer"    ; break;
            case secretary : cout << "secretary"  ; break;
            case manager   : cout << "manager"    ; break;
            case accountant: cout << "accountant" ; break;
            case executive : cout << "executive"  ; break;
            case researcher: cout << "researcher" ; break;
            default: break;
        }
        cout << endl;
        // Output dq data de ingresso na empresa.
        cout << "Ingressou a empresa em: " <<
            man[i].date.day << '/' << 
            man[i].date.month << '/' <<
            man[i].date.year  << endl ;
    }

    return 0;
}


