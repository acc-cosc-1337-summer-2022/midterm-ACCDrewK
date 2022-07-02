#include "question3.h"
#include <cctype>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char play_game{'Y'};
    cout << "Welcome to the Dice game!\nRoll the dice, and see what you get.\n" << endl;
    cout << "Roll the die? (y/n): ";
    cin >> play_game;
    if (toupper(play_game) == 'Y')
    {
        Die player_die = Die();
        bool continue_game{true};
        char player_response{'Y'};
        do
        {
            cout << "\nYour die lands on " << player_die.roll() << endl;
            cout << "Do you wish to roll again? (y/n): ";
            cin >> player_response;
            if (toupper(player_response) != 'Y')
                continue_game = false;
        } while (continue_game);
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}