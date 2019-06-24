#include "chessEngine.h"
#include <iostream>

using namespace std;


void chessEngine::pawnMove(char piece, char xaxis, int yaxis)
{
    if(xaxis == 'A')
    {
        xaxis = 1;
    }else if(xaxis == 'B')
    {
        xaxis = 2;
    }else if(xaxis == 'C')
    {
        xaxis = 3;
    }else if(xaxis == 'D')
    {
        xaxis = 4;
    }else if(xaxis == 'E')
    {
        xaxis = 5;
    }else if(xaxis == 'F'){
        
        xaxis = 6;
    }else if(xaxis == 'G')
    {
        xaxis = 7;
    }else if(xaxis == 'H')
    {
        xaxis = 8;
    }
        board[xaxis][yaxis] = pawn;
    
}

void chessEngine::kingMove(char piece, char xaxis, int yaxis)
{
    if(xaxis == 'A')
    {
        xaxis = 1;
    }else if(xaxis == 'B')
    {
        xaxis = 2;
    }else if(xaxis == 'C')
    {
        xaxis = 3;
    }else if(xaxis == 'D')
    {
        xaxis = 4;
    }else if(xaxis == 'E')
    {
        xaxis = 5;
    }else if(xaxis == 'F'){
        
        xaxis = 6;
    }else if(xaxis == 'G')
    {
        xaxis = 7;
    }else if(xaxis == 'H')
    {
        xaxis = 8;
    }
    
        board[xaxis][yaxis] = king;
}


void chessEngine::knightMove(char piece, char xaxis, int yaxis )
{
    if(xaxis == 'A')
    {
        xaxis = 1;
    }else if(xaxis == 'B')
    {
        xaxis = 2;
    }else if(xaxis == 'C')
    {
        xaxis = 3;
    }else if(xaxis == 'D')
    {
        xaxis = 4;
    }else if(xaxis == 'E')
    {
        xaxis = 5;
    }else if(xaxis == 'F'){
        
        xaxis = 6;
    }else if(xaxis == 'G')
    {
        xaxis = 7;
    }else if(xaxis == 'H')
    {
        xaxis = 8;
    }
    
    board[xaxis][yaxis] = knight;
}

void chessEngine::rookMove(char piece, char xaxis, int yaxis)
{
    if(xaxis == 'A')
    {
        xaxis = 1;
    }else if(xaxis == 'B')
    {
        xaxis = 2;
    }else if(xaxis == 'C')
    {
        xaxis = 3;
    }else if(xaxis == 'D')
    {
        xaxis = 4;
    }else if(xaxis == 'E')
    {
        xaxis = 5;
    }else if(xaxis == 'F'){
        
        xaxis = 6;
    }else if(xaxis == 'G')
    {
        xaxis = 7;
    }else if(xaxis == 'H')
    {
        xaxis = 8;
    }
    
    board[xaxis][yaxis] = rook;
}

void chessEngine::bishopMove(char piece, char xaxis, int yaxis )
{
    if(xaxis == 'A')
    {
        xaxis = 1;
    }else if(xaxis == 'B')
    {
        xaxis = 2;
    }else if(xaxis == 'C')
    {
        xaxis = 3;
    }else if(xaxis == 'D')
    {
        xaxis = 4;
    }else if(xaxis == 'E')
    {
        xaxis = 5;
    }else if(xaxis == 'F'){
        
        xaxis = 6;
    }else if(xaxis == 'G')
    {
        xaxis = 7;
    }else if(xaxis == 'H')
    {
        xaxis = 8;
    }
    
    board[xaxis][yaxis] = bishop;
}

