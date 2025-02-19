#include <iostream>

int main()
{
    std::string cars[][3] = {{"Ford", "Escape", "F-150"}, {"Corvette", "Equinox", "Silverado"}, {"Challenger", "Durango", "Ram-1500"}};
    std::cout<<sizeof(std::string)<<"\n"<<sizeof(cars)<<"\n"<<sizeof(cars[0])<<"\n"<<sizeof(cars[0][0])<<"\n"<<std::endl;
    int rows=sizeof(cars)/sizeof(cars[0]);
    int cols=sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}