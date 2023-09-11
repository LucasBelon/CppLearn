/* Create a structure called Volume that uses
 * three variables of type Distance (from the
 * ENGLSTRC example) to model the volume of a
 * room. Initialize a variable of type Volume
 * to specific dimensions, then calculate the
 * volume it represents, and print out the result.
 * To calculate the volume, convert each dimension
 * from a Distance variable to a variable of type
 * float representing feet and fractions of a
 * foot, and then multiply the resulting three numbers.
 * */

# include <iostream>
using namespace std;

// inches = 1 feet / 12;
// foot = 1 inches * 12.
struct DISTANCE {
    int feet;
    float inches;
};

// Two lenghts: lenght1 , lenght2;
// One Height.
// Each dimension is a DISTANCE structure.
struct VOLUME {
    DISTANCE lenght1;
    DISTANCE lenght2;
    DISTANCE height;
};

int main (void){
    VOLUME room;
    cout << "Digite quantos pés-polegadas tem a primeira dimensão da sala: ";
    cin >> room.lenght1.feet >> room.lenght1.inches;
    cout << "A segunda dimensão da sala: ";
    cin >> room.lenght2.feet >> room.lenght2.inches;
    cout << "A altura da sala: ";
    cin >> room.height.feet >> room.height.inches;
    float volume = 
        (room.height.feet*12 + room.height.inches) *
        (room.lenght1.feet*12 + room.lenght1.inches) *
        (room.lenght2.feet*12 + room.lenght2.inches);
    cout << "The room is " << volume << " cubic inches" << " Or "
             << volume/pow(12.0,3.0) << " cubic feet" << endl;;

    return 0;
}
