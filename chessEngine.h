#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class chessEngine {
public:
    static const int SIZE = 9;
    // object
    chessEngine();
    // initalizing the board
    void initWhite();
    void initBlack();
    // chess piece moves
    void pawnMove(char, char, int);
    void kingMove(char, char, int);
    void queenMove(char, char, int);
    void knightMove(char, char, int);
    void rookMove(char, char, int);
    void bishopMove(char, char, int);
    // win/lose
    bool over() const;
    // outputs the board
    void output() const;
    
private:
    string board[SIZE][SIZE];
    char pawn, rook, knight, bishop, king, queen;
};
