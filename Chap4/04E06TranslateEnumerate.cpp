/* We said earlier that C++ I/O statements don’t
 * automatically understand the data types
 * of enumerations. Instead, the (>>) and (<<)
 * operators think of such variables simply as
 * integers. You can overcome this limitation
 * by using switch statements to translate between
 * the user’s way of expressing an enumerated
 * variable and the actual values of the enumerated
 * variable. For example, imagine an enumerated
 * type with values that indicate an employee
 * type within an organization:
 * enum etype { laborer, secretary, manager, accountant,
 * executive, researcher };
 * Write a program that first allows the user
 * to specify a type by entering its first letter
 * (‘l’, ‘s’, ‘m’, and so on), then stores the
 * type chosen as a value of a variable of type
 * enum etype, and finally displays the complete
 * word for this type.
 *
 * Enter employee type (first letter only)
 * laborer, secretary, manager,
 * accountant, executive, researcher): a
 * Employee type is accountant
 * */

# include <iostream>
using namespace std;

/* Interpretar como um inteiro limitado a assumir
 * apenas 6 valores. Os nomes para cada valor se tornam
 * variáveis.*/
enum ETYPE { 
    laborer,
    secretary, 
    manager, 
    accountant, 
    executive, 
    researcher
};

/* O mesmo que escrever
 * const int laborer = 0;
 * const int secretary = 1;
 * const int manager = 2;
 * .
 * .
 * .
 * Mas não confundir c9m variáveis int comuns.
 * */

int main(void){
    ETYPE chosen;
    unsigned char opt;
    cout << "Escolha dentre as opções: [l,s,m,a,e,r]:";
    cin >> opt;
    switch(opt){
        case 'l': chosen = laborer    ; break;
        case 's': chosen = secretary  ; break;
        case 'm': chosen = manager    ; break;
        case 'a': chosen = accountant ; break;
        case 'e': chosen = executive  ; break;
        case 'r': chosen = researcher ; break;
        default: break;
    }
    switch(chosen){
        case laborer   : cout << "laborer"    ; break;
        case secretary : cout << "secretary"  ; break;
        case manager   : cout << "manager"    ; break;
        case accountant: cout << "accountant" ; break;
        case executive : cout << "executive"  ; break;
        case researcher: cout << "researcher" ; break;
        default: break;
    }
    return 0;
}
