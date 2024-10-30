#include <cpp_header.hpp>
void initialize_board(int board[4][4]);
void initialize_IO();
int input();
void output(std::string &message);
bool game_over(int board[4][4]);
void render_board(int board[4][4]);
void update_board(int board[4][4], int move);