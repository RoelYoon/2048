#include <game.hpp>
void initialize_board(int board[4][4]){
    for(int r = 0; r < 4; ++r)
        for(int c = 0; c < 4; ++c)
            board[r][c]=0;
    render_board(board);
}
void update_board(int board[4][4], int move){
    if(move == -1) return;

    int r = 1;
    int c = 1;
    bool empty = false;

    for (int i = 0; i < 4; i++){
        r = i;
        for (int i = 0; i < 4; i++){
            c = i;
            if (board[r][c] == 0){
                empty = true;
            }
        }
    }

    if (empty == true)
    {
        while (board[r][c] != 0){
            r = rand() % 5;
            c = rand() % 5;
        }

        int randNum = rand() % (101);

        if (randNum < 90){
            board[r][c] = 2;
        }
        
        else{
            board[r][c] = 4;
        }
    }
}