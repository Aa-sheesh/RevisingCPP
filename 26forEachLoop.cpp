#include <iostream>

int main()
{
    /*
        forEach loop is used to iterate over an array or a collection of elements
        Syntax:
            for(dataType variableName: arrayName){
                //code to be executed
            }
    */

    std::string names[] = {"Joe", "John", "Mary"};

    for(std::string name : names){
        std::cout<<name<<std::endl;
    
    }

    return 0;
}