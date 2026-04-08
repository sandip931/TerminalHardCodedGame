#ifndef LOGIC_H
#define LOGIC_H
#include <string>

typedef  struct log {
    std::string status;
    std::string colorCommand;
}Log;

Log  getStatusMsg(int move);
bool checkWinner(char (*board)[3],char currentPlayer);


#endif // !LOGIC_H
