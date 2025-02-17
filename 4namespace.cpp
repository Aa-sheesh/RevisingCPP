#include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){
    /*
        Namespace - Provides a solution for preventing name conflicts in large projects.
                    Each entity needs a unique name.
                    A namespace allows for identically named entities as long as the namespaces are different.
    */
    // int x=0;
    // std::cout << x << std::endl; // 0
    // std::cout << first::x << std::endl; // 1
    // std::cout << second::x << std::endl; // 2

    //:: is the scope resolution operator

    // using namespace first;
    // std::cout << x << std::endl; // 1
    // std::cout << second::x << std::endl; // 2

    //using namespace std - avoid using this in large projects as it can cause name conflicts with other libraries
    // instead use it like this:
    using std::cout;
    using std::endl;
    cout << first::x << endl; // 1

    return 0;
}