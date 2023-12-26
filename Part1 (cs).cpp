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
