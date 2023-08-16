// enums_cards.cpp
// demonstrates enums using playing cards
#include <iostream>
using namespace std;

// Enums começam contando do zero. Podemos
// alterar isso fazendo:
enum Suits {clubs=2, diamonds, hearts, spades};
const int jack = 11; //face cards
const int queen = 12;
const int king = 13;
const int ace = 14;

struct CARD
{
    int number; //2 to 10, jack, queen, king, ace
    Suits suit; //clubs, diamonds, hearts, spades
};
// Usar enums te trava uma variável pra assumir
// valores delimitados e definidos. Não é muito
// complexo, mas é um mecanismo melhor do que
// não o ter.

int main(){
    CARD temp, chosen, prize; //define cards
    int position;
    
    CARD card1 = { 
        .number=7, 
        .suit=clubs
    }; //initialize card1
    cout << "Card 1 is the 7 of clubs\n";
    
    CARD card2 = {
        .number=jack,
        .suit=hearts
    }; //initialize card2
    cout << "Card 2 is the jack of hearts\n";
    
    CARD card3 = {
        .number=ace,
        .suit=spades
    }; //initialize card3
    cout << "Card 3 is the ace of spades\n";
    
    prize = card3; //copy this card, to remember it
    
    cout << "I’m swapping card 1 and card 3\n";
    temp = card3; card3 = card1; card1 = temp;
    
    cout << "I’m swapping card 2 and card 3\n";
    temp = card3; card3 = card2; card2 = temp;
    
    cout << "I’m swapping card 1 and card 2\n";
    temp = card2; card2 = card1; card1 = temp;
    
    cout << "Now, where (1, 2, or 3) is the ace of spades? ";
    cin >> position;
    switch (position){
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }

    if(chosen.number == prize.number && // compare cards
        chosen.suit == prize.suit)
        cout << "That’s right! You win!\n";
    else
        cout << "Sorry. You lose.\n";
    // card2.suit += 1;
    // Isso dá erro. Operação incompatível
    // com o tipo definido.

    return 0;
}
