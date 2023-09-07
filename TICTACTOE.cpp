#include <iostream>
using namespace std;

char sq[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checktowin();
void board();

int main()
{
	int player = 1,i,ch;

    char number;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> ch;

        number=(player == 1) ? 'X' : 'O';

        if (ch == 1 && sq[1] == '1')

            sq[1] = number;
        else if (ch == 2 && sq[2] == '2')

            sq[2] = number;
        else if (ch == 3 && sq[3] == '3')

            sq[3] = number;
        else if (ch == 4 && sq[4] == '4')

            sq[4] = number;
        else if (ch == 5 && sq[5] == '5')

            sq[5] = number;
        else if (ch == 6 && sq[6] == '6')

            sq[6] = number;
        else if (ch == 7 && sq[7] == '7')

            sq[7] = number;
        else if (ch == 8 && sq[8] == '8')

            sq[8] = number;
        else if (ch == 9 && sq[9] == '9')

            sq[9] = number;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checktowin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
********************************************/

int checktowin()
{
    if (sq[1] == sq[2] && sq[2] == sq[3])

        return 1;
    else if (sq[4] == sq[5] && sq[5] == sq[6])

        return 1;
    else if (sq[7] == sq[8] && sq[8] == sq[9])

        return 1;
    else if (sq[1] == sq[4] && sq[4] == sq[7])

        return 1;
    else if (sq[2] == sq[5] && sq[5] == sq[8])

        return 1;
    else if (sq[3] == sq[6] && sq[6] == sq[9])

        return 1;
    else if (sq[1] == sq[5] && sq[5] == sq[9])

        return 1;
    else if (sq[3] == sq[5] && sq[5] == sq[7])

        return 1;
    else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' 
                    && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' 
                  && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS NUMBER
******************************************************************/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;

    cout << "     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
******************************************************************/