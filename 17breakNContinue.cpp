#include <iostream>
/*
    break: It is used to exit the loop.
    continue: It is used to skip the current iteration of the loop.
*/


int main(){
    for(int i=10;i>0;i--){
        if(i==5){
            // continue;
            // break;
        }
        std::cout << i << std::endl;

    }
    std::cout<<"Happy new year!";

    return 0;
}