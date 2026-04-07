#ifndef BOARD_H
#define BOARD_H

void displayBoard(char (*board)[3]);
void displayTurn(char currentPlayer);
bool changeTurn(bool isXturn);
int takeInput();


#endif // !BOARD_H
