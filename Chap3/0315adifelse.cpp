// adifelse.cpp
// demonstrates IF...ELSE with adventure program
#include <iostream>
using namespace std;

int main() {
  char dir = 'a';
  int x = 10, y = 10;
  cout << "Type Enter to quit\n";
  while (dir != ' ') // until Enter is typed
  {
    cout << "\nYour location is " << x << ", " << y;
    cout << "\nPress direction key(n, s, e, w) : ";
    dir = getchar(); // get character
    while((dir = getchar()) == '\n') ;
    if (dir == 'n')  // go north
      y--;
    else if (dir == 's') // go south
      y++;
    else if (dir == 'e') // go east
      x++;
    else if (dir == 'w') // go west
      x--;
  } // end while
  return 0;
} // end main
