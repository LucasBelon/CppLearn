// partinit.cpp
// shows initialization of structure variables
# include <stdio.h>


typedef struct // specify a structure
{
    int modelnumber; // ID number of widget
    int partnumber;  // ID number of widget part
    float cost;      // cost of part
} part;


int main() { // initialize variable
    part part1 = {6244, 373, 217.55F};
    part part2; // define variable

    // display first variable
    printf("Model %d", part1.modelnumber);
    printf(", part %d",part1.partnumber);
    printf(", costs $%f\n", part1.cost);

    // Aqui parece uma monstruosidade acontecendo.
    // Em C isso sequer faz sentido.
    part2 = part1; // assign first variable to second
    // display second variable
    printf("Model %d", part2.modelnumber);
    printf(", part %d",part2.partnumber);
    printf(", costs $%f\n", part2.cost);
    
    return 0;
}
