// Eu perdi a solução da resposta por não ter comitado.
// O importante é que eu encontrei alguns bugs que
// tem a ver com a manipulação do buffer de input.
// Basicamente, o programa não funciona.
// ex3_4.cpp
// models four-function calculator
#include <iostream>
using namespace std;
int main() {
  double n1, n2, ans;
  char oper, ch;
  do {
    cout << "\nEnter first number, operator, second number : ";
    cin >> n1 >> oper >> n2;
    switch (oper) {
    case '+':
      ans = n1 + n2;
      break;
    case '-':
    case 'm':
      ans = n1 - n2;
      break;
    case '*':
      ans = n1 * n2;
      break;
    case '/':
      ans = n1 / n2;
      break;
    default:
      ans = 0;
    }
    cout << "Answer = " << ans;
    cout << "\nDo another(Enter 'y' or 'n') ? ";
    cin >> ch;
  } while (ch != 'n');
  return 0;
}
