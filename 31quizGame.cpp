#include <iostream>

int main(){
    std::string questions[]={
        "1. What year was C++ invented?",
        "2. Who invented C++?",
        "3. What is the predecessor of C++?",
        "4. is the Earth flat?"
    };
    int size=sizeof(questions)/sizeof(questions[0]);
    std::string options[][3]={
        {"A. 1979", "B. 1980", "C. 1985"},
        {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. Ken Thompson"},
        {"A. C", "B. B", "C. A"},
        {"A. Yes", "B. No", "C. Maybe"}
    };
    int optionRows=sizeof(options)/sizeof(options[0]);
    int optionCols=sizeof(options[0])/sizeof(options[0][0]);
    char answers[]={'B', 'A', 'A', 'B'};
    int score=0;
    char userAnswers[optionRows];
    // std::cout<<optionRows;
    std::cout<<"Welcome to the quiz game!\n";


    for(int i=0;i<size;i++){
        std::cout<<"*************************\n";
        std::cout<<questions[i]<<"\n";
        for(int j=0;j<optionCols;j++){
            std::cout<<options[i][j]<<"\n";
        }
        std::cin>>userAnswers[i];
        
    }
    std::cout<<"*************************\n";

    int userAnswerSize=sizeof(userAnswers)/sizeof(userAnswers[0]);
    for(int i=0;i<userAnswerSize;i++){
        std::cout<<"User answers: ";
        std::cout<<userAnswers[i]<<"\n";
        if(userAnswers[i]==answers[i]){
            score++;
        }
    }
    std::cout<<"*************************\n";

    std::cout<<"Your score is: "<<score<<"/"<<size<<std::endl;
    std::cout<<"*************************\n";


    return 0;
}