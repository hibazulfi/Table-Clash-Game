#include <iostream>
#include <cstdlib>
#include <string>
#include<conio.h>

using namespace std;

char display[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
string status = "On going";
int score_person_1 = 0;
int score_person_2 = 0;

void Display_board(void);
void Game_play(string a, string b);
bool Check_Game();
bool Check_Draw();
void End_Game(string a, string b);
void Display_board(void)
{
    system("CLS");

    cout<<endl<<endl<<endl<<"\t\t\t\t\t                    TABLE-CLASH GAME                    "<<endl<<endl<<endl<<endl;
    cout << endl << endl;
    cout<<"\t\t\t\t\t Status : "<<status;
    cout << endl << endl;

    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[0][0] << "  |  " << display[0][1] << "   |  " << display[0][2] << endl;
    cout << "\t\t\t\t\t\t\t_____|______|_______" << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[1][0] << "  |  " << display[1][1] << "   |  " << display[1][2] << endl;
    cout << "\t\t\t\t\t\t\t_____|______|_______" << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
    cout << "\t\t\t\t\t\t\t  " << display[2][0] << "  |  " << display[2][1] << "   |  " << display[2][2] << endl;
    cout << "\t\t\t\t\t\t\t     |      |       " << endl;
}
void Game_play(string a , string b){
    char input_1;
    char input_2;
    cout<<endl<<endl;
    cout <<"\t\t\t\t\t\t"<< a << "'s Turn " << endl;
back:
    cout<<endl;
    cout <<"\t\t\t\t\t\t"<< a << " Enter any number from the board : ";
    input_1=getch();

    switch (input_1)
    {
    case '1':
    {
        if (display[0][0] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][0] = '+';
        }
    }
    break;
    case '2':
    {
        if (display[0][1] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][1] = '+';
        }
    }
    break;
    case '3':
    {
        if (display[0][2] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][2] = '+';
        }
    }
    break;
    case '4':
    {
        if (display[1][0] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][0] = '+';
        }
    }
    break;
    case '5':
    {
        if (display[1][1] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][1] = '+';
        }
    }
    break;
    case '6':
    {
        if (display[1][2] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][2] = '+';
        }
    }
    break;
    case '7':
    {
        if (display[2][0] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][0] = '+';
        }
    }
    break;
    case '8':
    {
        if (display[2][1] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][1] = '+';
        }
    }
    break;
    case '9':
    {
        if (display[2][2] == '-')
        {
            cout << "\t\t\t\t\t\t Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][2] = '+';
        }
    }
    break;
    default:
    {
        cout<<endl<<endl;
        cout << "\t\t\t\t\t\t Wrong Entry !!!! " << endl;
        cout << "\t\t\t\t\t\t Try Again  ";
        goto back;
    }
    }
if(Check_Game()){
        score_person_1 ++;
        End_Game(a,b);
    }
    else if(!Check_Game()){
        Display_board();
        cout <<"\t\t\t\t\t\t"<< b << "'s Turn " << endl;
    start:
        cout << "\t\t\t\t\t\t "<<b << " Enter any number from the board : ";
        input_2=getch();

        switch (input_2)
        {
        case '1':
        {
            if (display[0][0] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][0] = '-';
            }
        }
        break;
        case '2':
        {
            if (display[0][1] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][1] = '-';
            }
        }
        break;
        case '3':
        {
            if (display[0][2] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][2] = '-';
            }
        }
        break;
        case '4':
        {
            if (display[1][0] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][0] = '-';
            }
        }
        break;
        case '5':
        {
            if (display[1][1] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][1] = '-';
            }
        }
        break;
        case '6':
        {
            if (display[1][2] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][2] = '-';
            }
        }
        break;
        case '7':
        {
            if (display[2][0] == '+')
            {
                cout <<"\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][0] = '-';
            }
        }
        break;
        case '8':
        {
            if (display[2][1] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][1] = '-';
            }
        }
        break;
        case '9':
        {
            if (display[2][2] == '+')
            {
                cout << "\t\t\t\t\t\tWrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][2] = '-';
            }
        }
        break;
        default:
        {
            cout<<endl<<endl;
            cout << "\t\t\t\t\t\t Wrong Entry " << endl;
            cout << "\t\t\t\t\t\t Try Again ;) ";
            goto start;
        }
        }
Display_board();
        if(Check_Game()){
            score_person_2 ++;
            End_Game(a,b);
        }
        else if (!Check_Game()){
            if(Check_Draw()){
                End_Game(a,b);
            }
        }
    }
    Game_play(a,b);
}
bool Check_Game()
{
    // For Vertical Victory;
    if ((display[0][0] == '+' && display[1][0] == '+' && display[2][0] == '+') ||
        (display[0][0] == '-' && display[1][0] == '-' && display[2][0] == '-'))
    {
        return true;
    }
    if ((display[0][1] == '+' && display[1][1] == '+' && display[2][1] == '+') ||
        (display[0][1] == '-' && display[1][1] == '-' && display[2][1] == '-'))
    {
        return true;
    }
    if ((display[0][2] == '+' && display[1][2] == '+' && display[2][2] == '+') ||
        (display[0][2] == '-' && display[1][2] == '-' && display[2][2] == '-'))
    {
        return true;
    }

    // For Horizontal Victory;
    if ((display[0][0] == '+' && display[0][1] == '+' && display[0][2] == '+') ||
        (display[0][0] == '-' && display[0][1] == '-' && display[0][2] == '-'))
    {
        return true;
    }
    if ((display[1][0] == '+' && display[1][1] == '+' && display[1][2] == '+') ||
        (display[1][0] == '-' && display[1][1] == '-' && display[1][2] == '-'))
    {
        return true;
    }
    if ((display[2][0] == '+' && display[2][1] == '+' && display[2][2] == '+') ||
        (display[2][0] == '-' && display[2][1] == '-' && display[2][2] == '-'))
    {
        return true;
    }

    // For Diagonal Victory;
    if ((display[0][0] == '+' && display[1][1] == '+' && display[2][2] == '+') ||
        (display[0][0] == '-' && display[1][1] == '-' && display[2][2] == '-'))
    {
        return true;
    }
    if ((display[0][2] == '+' && display[1][1] == '+' && display[2][0] == '+') ||
        (display[0][2] == '-' && display[1][1] == '-' && display[2][0] == '-'))
    {
        return true;
    }

    return false;
}
bool Check_Draw(){
    if(display[0][0] != '1' && display[1][0] !='4' && display[2][0] != '7' && display[0][1] != '2' && display[1][1] != '5' && display[2][1] != '8' && display[0][2] != '3' && display[1][2] != '6' && display[2][2] != '9'){
        status = "Draw";
        return true;
    }
    return false;
}
void End_Game(string a, string b)
{
    system("CLS");
    cout<<endl<<endl<<endl;
    if (score_person_1 > score_person_2)
    {
        cout << "\t\t\t\t\t\t Congratulations " << a << "! You won the game." << endl;
    }
    else if (score_person_1 < score_person_2)
    {
        cout << "\t\t\t\t\t\t Congratulations " << b << "! You won the game." << endl;
    }
    else
    {
        cout << "\t\t\t\t\t\t It's a draw!" << endl;
    }
