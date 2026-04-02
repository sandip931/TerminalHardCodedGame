tictactoe/
├── Board.h          # Game board logic
├── Board.cpp
├── Game.h           # Game flow control
├── Game.cpp
├── Player.h         # Player abstraction
├── Player.cpp
├── main.cpp
└── Makefile


########################################### SKELETAL

#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <optional>

/**
 * Represents the 3x3 game board
 * Uses std::array for fixed-size, stack-allocated storage
 */
class Board {
private:
    // ' ', 'X', or 'O' - using char for simplicity and easy printing
    std::array<std::array<char, 3>, 3> cells;
    
    // Helper to check if a line (row, col, or diagonal) is all the same
    bool checkLine(int row1, int col1, int row2, int col2, int row3, int col3) const;
    
public:
    // Constructor - initializes empty board
    Board();
    
    // Place a mark at position (row, col)
    // Returns true if move was valid and placed
    bool placeMark(int row, int col, char player);
    
    // Get mark at position (for display)
    char getMark(int row, int col) const;
    
    // Check if a specific player has won
    bool checkWin(char player) const;
    
    // Check if board is completely filled
    bool isFull() const;
    
    // Reset board for new game
    void reset();
    
    // Display board to console
    void display() const;
};

#endif
###########################################SKELETAL
