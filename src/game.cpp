#include <game.hpp>
int main(){
    //this is a copy
    int board[4][4];
    initialize_board(board);
    initialize_IO();
    while(!game_over(board)){
        update_board(board,input());
        render_board(board);
    }
}