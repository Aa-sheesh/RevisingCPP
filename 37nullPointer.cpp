#include <iostream>

int main(){
    /*
        Null value=
            -a special value that means something has no value.
            -when a pointer is holding a null value, it is not pointing to anything(null pointer)

        nullptr=
            -keyword that represents a null pointer literal
            - nullptrs are helpful when determining if an address was successfully assigned to a pointer
            - when using pointers, be careful that your code isnt dereferencing nullptr or pointing to free memory as this would lead to undefined behavior
    */

    int *ptr=nullptr;
    int x=10;

    ptr=&x;
    //check
    if(ptr==nullptr){
        std::cout << "address wasnt assigned" << std::endl;
    }
    else{
        std::cout << "address was assigned" << std::endl;
        std::cout<<*ptr;
    }

    return 0;
}