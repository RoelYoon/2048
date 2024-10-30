#include <game.hpp>
void initialize_IO(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
}
int input(){
    output("Input: ");
    char inp; std::cin>>inp;
    switch(inp){
        case 'w':
            return 0;
        case 'a':
            return 1;
        case 's':
            return 2;
        case 'd':
            return 3;
        default:
            return -1;
    }
}
void new_screen(){
    for(int i = 0; i < 50; ++i)
        std::cout<<"\n";
    std::cout<<std::flush;
}
void output(std::string message){
    std::cout<<message<<std::flush;
}
void output(std::string &message){
    std::cout<<message<<std::flush;
}