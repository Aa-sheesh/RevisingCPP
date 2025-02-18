#include <iostream>

int main(){
    /*
        if statement= do something if true if not, do nothing
        else statement = do something if true, do something else if false
        else if statement = do something if true, do something else if false, do something else if false
    */
   
   int x=10;

    if(x==0){
        std::cout << "x is "<<x << std::endl;
    }else if(x==1){
        std::cout << "x is "<<x << std::endl;
    }else{
        std::cout << "x is not 0 or 1" << std::endl;
    }

    return 0;
}