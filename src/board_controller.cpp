#include <game.hpp>
void initialize_board(int board[4][4]){
    for(int r = 0; r < 4; ++r)
        for(int c = 0; c < 4; ++c)
            board[r][c]=0;
}
void update_board(int board[4][4], int move){
    if(move==-1) return;
    output(std::to_string(move)+"\n");
}