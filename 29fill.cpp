#include <iostream>

int main(){
    /*
        fill() = Fill a range of elements with a specific value
            fill(startaddress, endaddress, value)
    */
    std::string foods[100];
    std::fill(foods, foods+100, "Pizza");
    int i=1;
    for(std::string food:foods){
        std::cout<<i<<food<<std::endl;
        i++;
    }

    return 0;
}