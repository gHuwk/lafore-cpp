#include <iostream>

using namespace std;

enum Suit { clubs, diamons, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Cards
{
private:
    int number;
    Suit suit;
public:
    Cards(){}
    Cards(int n, Suit s): number(n), suit(s) {}
    void display();
    bool isEqual(Cards second);
    void swap(Cards &two);
};

void Cards::display()
{
    if (number >= 2 && number <= 10) // классическая карта из колоды
        cout << number;
    else
        switch ( number ) {
        case queen: cout << "Queen"; break;
        case jack: cout << "Jack"; break;
        case king: cout << "King"; break;
        case ace: cout << "Ace"; break;
        default: cout << "Default"; break;
        }
    cout << ' ';
    switch (suit) {
    case clubs: cout << "clubs"; break;
    case diamons: cout << "diamond"; break;
    case hearts: cout << "heart"; break;
    case spades: cout << "spade"; break;
    default: cout << "Default"; break;
    }
    cout << endl;
}

bool Cards::isEqual(Cards second)
{
    return (number == second.number && suit == second.suit) ? true : false;
}

void Cards::swap(Cards &two)
{
    Cards temp;
    temp.number = number;
    temp.suit = suit;
    number = two.number;
    suit = two.suit;
    two = temp;
}

int main()
{
    Cards chosen, prize; // выборочная и выигрыш
    Cards card_one(7, clubs);
    Cards card_two(jack, hearts);
    Cards card_three(ace, spades);
    int position;
    cout << "Card 1: ";
    card_one.display();
    cout << "Card 2: ";
    card_two.display();
    cout << "Card 3: ";
    card_three.display();

    prize = card_three;
    cout << "Changing 1 and 3..." << endl;
    card_three.swap(card_one);
    cout << "Changing 2 and 3..." << endl;
    card_two.swap(card_three);
    cout << "Changing 1 and 2..." << endl;
    card_one.swap(card_two);

    cout << "Where is ";
    prize.display();
    cout << ": ";
    cin >> position;
    bool check_trigger = true;
    switch (position) {
    case 1: chosen = card_one; break;
    case 2: chosen = card_two; break;
    case 3: chosen = card_three; break;
    default: cout << "DO NOT CHEAT!"; check_trigger = false; break;
    }
    if (check_trigger)
    {
        if (chosen.isEqual(prize))
            cout << "You win!" << endl;
        else
            cout << "You lose!" << endl;
        cout << "You chosed ";
        chosen.display();

        cout << "Now are: " << endl;
        card_one.display();
        card_two.display();
        card_three.display();
        cout << endl;
    }
    return 0;
}

