#ifndef HEADER_H
#define HEADER_H

const int SIZE = 4;

/*
Board: 2D array of a constant SIZE variable
      initialize all items to false
      type bool
      Represent free or occupied
*/
class Board {
private:
    bool board[SIZE][SIZE];

public:
    Board();                         // initialize everything to false (empty)
    Board(const Board &other);

    bool addQueen(int row, int col); // place queen if valid and free
    bool check_valid(int row, int col); // check if a position is safe
    void reset_pos(int row, int col);   // set a position to free
    bool is_occupied(int row, int col); // return true if occupied, false if free
    void print();                       // prints the board
};

/*
Queens:
- queens[i] = row position of queen in column i, or -1 if unassigned
- num_assigned = number of queens already assigned
*/
class Queens {
private:
    int queens[SIZE];   // -1 unassigned, 0 to SIZE-1 position
    int num_assigned;   // number of assigned queens

public:
    Queens();                           // initialize all elements to -1, num_assigned to 0
    int select_unassigned();            // return the index of the first -1
    void assign(int queen_index, int row_index); // assign row to queen index
    bool all_assigned();                // true if num_assigned == SIZE
};

/*
Nqueens:
- Uses Board + Queens to solve the puzzle with backtracking
*/
class Nqueens {
private:
    Board board;
    Queens queens;

public:
    Nqueens();
    bool place_queens();   // backtracking algorithm
    void print_queens();   // print the solution
};

#endif