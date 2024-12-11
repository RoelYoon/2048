#include <game.hpp>
void render_board(int board[4][4])
{
    new_screen();
    for(int i = 0; i<4; i++ )
    {
        for (int j=0;j<4;j++)
        {
            output(std::to_string(board[i][j])+" ");
        }
        output("\n");  
    }

}
// std::to_string(7) -> "7"
/*
0 0 0 0
2 0 4 0
0 2 0 2
2 2 2 0

output("0 ")
output("0 ")
output("0 ")
output("0 ")
output("2 ")
output("0 ")
output("4 ")
output("0 ")
*/

