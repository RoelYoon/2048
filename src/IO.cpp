#include <game.hpp>
void initialize_IO(){
    freopen("IO Space/input","r",stdin);
    freopen("IO Space/output","w",stdout);
}
int input(){
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
void output(std::string &message){
    std::cout<<message;
}