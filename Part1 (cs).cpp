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
