#include <iostream>
#include <ctime>

/*
    Pseudo Random Number Generator = Not completely random because it is generated by a formula and a seed value (starting point) 
*/

int main(){
    srand(time(NULL)); // seed value = current time in seconds 
    int num=rand()%6+1; // 1-6
    std::cout<<num<<std::endl;

    return 0;
}