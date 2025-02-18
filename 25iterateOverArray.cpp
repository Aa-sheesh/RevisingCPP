#include <iostream>

int main(){
    std::string names[]={"Aashish","Amit","Ankit","Ankur","Anshul","Anuj","Anupam","Arun","Ashish","Ashutosh","Atul","Ayush","Bhupendra","Bhuvan","Brijesh","Chandan","Chetan","Deepak","Dheeraj","Dhruv","Gaurav","Gopal","Gyanendra","Hemant","Himanshu","Jagdish","Jatin","Kamal","Kapil","Karan","Kartik","Keshav"};
    
    std::cout<<"The names in the array are: "<<std::endl;
    for(int i=0;i<sizeof(names)/sizeof(names[0]);i++){
        std::cout<<i+1<<". "<<names[i]<<std::endl;
    }

    return 0;
}