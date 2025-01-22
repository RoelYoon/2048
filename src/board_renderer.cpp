#include <game.hpp>
void render_board(int board[4][4]){
    new_screen();
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            output(board[i][j]);
        }
        output("\n");
    }
}