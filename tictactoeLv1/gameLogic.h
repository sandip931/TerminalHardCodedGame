#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include<ostream>

bool checkWin(char board[3][3],char currentPlayer);
std::string getWinner(bool winner,char currentPlayer);
// bool isMoveValid(char board[3][3]);

#endif // !DEBUG
