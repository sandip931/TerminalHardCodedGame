#ifndef BOARD_H
#define BOARD_H
#include<string>

void displayBoard(char (*board)[3]);
void displayTurn(char currentPlayer);
bool changeTurn(bool isXturn);
int takeInput(char (*board)[3],char currentPlayer);
void clearBoard(char (*board)[3]);



#endif // !BOARD_H
