#include <iostream>
int searchArray(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    std::cout<<size<<std::endl;
    int index;
    int myNum;
    std::cout<<"Enter a number to search for: ";
    std::cin>>myNum;
    index=searchArray(numbers,size,myNum);
    std::cout<<"Index of "<<myNum<<" is "<<index<<std::endl;


    return 0;
}