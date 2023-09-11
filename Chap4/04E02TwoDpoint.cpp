/* A point on the two-dimensional plane can be
 * represented by two numbers: an x coordi nate
 * and a y coordinate. For example, (4,5) represents
 * a point 4 units to the right of the vertical
 * axis, and 5 units up from the horizontal axi
 * . The sum of two points can be defined as a
 * new point whose x coordinate is the sum of
 * the x coordinates of the two points, and whose
 * y coordinate is the sum of the y coordinates.
 *
 * Write a program that uses a structure called
 * point to model a point. Define three point
 * , and have the user input values to two of
 * them. Then set the third point equal to the
 * sum of the other two, and display the value
 * of the new point. Interaction with the program
 * might look like this:
 *
 * Enter coordinates for p1: 3 4
 * Enter coordinates for p2: 5 7
 * Coordinates of p1+p2 are: 8, 11
 * */

# include <iostream>
using namespace std;

struct POINT {
    int horizontal;
    int vertical;
};

int main(void){
    POINT point1, point2, sum;
    cout << "Enter coordinates for p1: " ;
    cin >> point1.horizontal >> point1.vertical;
    cout << "Enter coordinates for p2: " ;
    cin >> point2.horizontal >> point2.vertical;
    sum.horizontal = point1.horizontal + point2.horizontal;
    sum.vertical = point1.vertical + point2.vertical;
    cout << "Coordinates of p1 + p2 are: " << sum.horizontal << ", " << sum.vertical << endl;

    return 0;
}
