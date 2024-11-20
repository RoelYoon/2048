#include <game.hpp>
bool game_over(int board[4][4]){
    bool is_game_over = true;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == board[i][j+1]) {
                is_game_over == false;
            }
            if (board[j][i] == board[j+1][i]) {
                is_game_over == false;
            }
        }
    }
    return is_game_over;
}