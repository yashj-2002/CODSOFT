#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 
int main()
{
 
    cout << "\n\t\t\tWelcome to GuessTheNumber game!"
         << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;
 
    while (true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;
 
        // To select the level of difficulty
        int choiceDiff;
        cout << "Enter the number: ";
        cin >> choiceDiff;
 
        // Generating the secret number to be guessed
        srand(time(0));
        int numbertobeguessed = 1 + (rand() % 100);
        int choiceofplayer;
 
        // Difficulty Level:Easy
        if (choiceDiff == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int numberofleftchoices = 10;
            for (int i = 1; i <= 10; i++) {
 
                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> choiceofplayer;
 
                // determining if the choiceofplayer matches
                // the secret number
                if (choiceofplayer == numbertobeguessed) {
                    cout << "Well played! You won, "
                         << choiceofplayer
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << choiceofplayer
                         << " is not the right number\n";
                    if (choiceofplayer > numbertobeguessed) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    numberofleftchoices--;
                    cout << numberofleftchoices << " choices left. "
                         << endl;
                    if (numberofleftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << numbertobeguessed
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
 
        // Difficulty level : Medium
        else if (choiceDiff == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int numberofleftchoices = 7;
            for (int i = 1; i <= 7; i++) {
 
                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> choiceofplayer;
 
                // determining if the choiceofplayer matches
                // the secret number
                if (choiceofplayer == numbertobeguessed) {
                    cout << "Well played! You won, "
                         << choiceofplayer
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << choiceofplayer
                         << " is not the right number\n";
                    if (choiceofplayer > numbertobeguessed) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    numberofleftchoices--;
                    cout << numberofleftchoices << " choices left. "
                         << endl;
                    if (numberofleftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << numbertobeguessed
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // Difficulty level : Medium
        else if (choiceDiff == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int numberofleftchoices = 5;
            for (int i = 1; i <= 5; i++) {
 
                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> choiceofplayer;
 
                // determining if the choiceofplayer matches
                // the secret number
                if (choiceofplayer == numbertobeguessed) {
                    cout << "Well played! You won, "
                         << choiceofplayer
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << choiceofplayer
                         << " is not the right number\n";
                    if (choiceofplayer > numbertobeguessed) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    numberofleftchoices--;
                    cout << numberofleftchoices << " choices left. "
                         << endl;
                    if (numberofleftchoices == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << numbertobeguessed
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (choiceDiff == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}