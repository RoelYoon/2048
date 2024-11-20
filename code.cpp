#include <iostream>

bool game_over(int board[4][4]){
    bool is_game_over = true;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == board[i][j+1]) {
                is_game_over = false;
            }
            if (board[j][i] == board[j+1][i]) {
                is_game_over = false;
            }
        }
    }
    return is_game_over;
}
int main(){
    int test_board1 [4][4] = {
        {2, 4, 2, 4},
        {4, 2, 4, 2},
        {2, 4, 2, 4},
        {4, 2, 4, 2}
    };
    std::cout << game_over(test_board1);
    std::cout << "\n";
    
    int test_board2 [4][4] = {
        {4, 4, 16, 4},
        {4, 2, 32, 2},
        {2, 4, 8, 4},
        {4, 128, 4, 2}
    };
    std::cout << game_over(test_board2);
    return 0;
}