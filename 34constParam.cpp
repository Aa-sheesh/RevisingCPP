#include <iostream>
void function (const int *x,const int *y);

int main(){
    /*
        const parameter = parameter that is effectively read-only
        -code is more secure & conveys intent
        -useful for references and pointers
    */
    int x=10;
    int y=20;
    function(&x,&y);
    

    return 0;
}

void function (const int *x,const int *y){
    // *x=20; //error: assignment of read-only location '* x'
    // *y=30; //error: assignment of read-only location '* y'
    std::cout<<*x<<std::endl;
    std::cout<<*y<<std::endl;
}