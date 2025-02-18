#include <iostream>

int main(){
    int rows,columns;
    char symbol;
    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;
    std::cout<<"Enter the number of columns: ";
    std::cin>>columns;
    std::cout<<"Enter the symbol for the rectangle: ";
    std::cin>>symbol;
    for(int i=0;i!=rows;i++){
        for(int j=0;j!=columns;j++){
            std::cout<<symbol;
        }
        std::cout<<std::endl;

    }

    return 0;
}