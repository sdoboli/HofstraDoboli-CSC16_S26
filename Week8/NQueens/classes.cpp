#include "header.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// implement class Board
Board::Board(){  // initialize everything to false (emtpy), true (filled)
    for(int r = 0; r < SIZE; r++){
        for(int c = 0; c < SIZE; c++)
            board[r][c] = false;
    }
}

// copy constructor - copies a board items into another board
Board::Board(const Board &other) {
    for(int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++)
            board[r][c] = other.board[r][c];
    }
}

// check if position is free, 
// then set it to occupied if valid, 
// return true if queen has been positioned, false otherwise
bool Board::addQueen(int row, int col){  
    assert(row >=0  && row <= SIZE-1);
    assert(col >=0  && col <= SIZE-1);

    if (!board[row][col] && check_valid(row,col)){ // free
        board[row][col] = true;
        return true;
    }
    return false; // queen cannot be positioned
}

// check if a position can be occupied without attacking other set positions
bool Board::check_valid(int row, int col){ 
    assert(row >=0  && row <= SIZE-1);
    assert(col >=0 &&  col <= SIZE-1);

    for (int c = 0; c < col; c++){
        if (board[row][c])
            return false;
    }

    for (int r = 0; r < SIZE; r++){
        for (int c = 0; c < col; c++){
            if (board[r][c]){
                if ((r - c == row - col) || (r + c == row + col))
                    return false;
            }
        }
    }
    return true;
}

void Board::reset_pos(int row, int col){
    assert(row >=0  && row <= SIZE-1);
    assert(col >=0 && col <= SIZE-1);
    board[row][col] = false;
}

bool Board::is_occupied(int row, int col){
    assert(row >=0  && row <= SIZE-1);
    assert(col >=0 && col <= SIZE-1);
    return board[row][col]; 
}

void Board::print(){
    for (int r = 0; r < SIZE; r++){
        for (int c = 0; c < SIZE; c++){
            if (board[r][c])
                cout << "Q" << "|";
            else
                cout << " |";
        }
        cout << endl;
    }     
}


/* =========================
   Queens class (EMPTY BODIES)
   ========================= */

Queens::Queens() {
    // TODO: initialize queens[] to -1 and num_assigned to 0
}

int Queens::select_unassigned() {
    // TODO: return index of first -1
    return -1;
}

void Queens::assign(int queen_index, int row_index) {
    // TODO: assign row_index to queens[queen_index] and increment num_assigned
}

bool Queens::all_assigned() {
    // TODO: return true if num_assigned == SIZE
    return false;
}

/* =========================
   Nqueens class (EMPTY BODIES)
   ========================= */

Nqueens::Nqueens() {
    // TODO: constructor implementation
}

bool Nqueens::place_queens() {
    // TODO: implement backtracking algorithm
    return false;
}

void Nqueens::print_queens() {
    // TODO: print solution
}