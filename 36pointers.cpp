#include <iostream>

int main()
{
    /*
        pointers = variable that stores a memory address of another variable
            sometimes its easier to work with an address
            &=address of operator
            * = dereference operator
    */
    
    std::string name="Aashish";
    std::string *namePtr=&name;
    std::string pizzas[5]={"Pepperoni","Cheese","Sausage","Supreme","Veggie"};
    // std::string *pizzaPtr=pizzas;

    std::cout << "name: " << name << std::endl;//value
    std::cout << "namePtr: " << namePtr << std::endl;//memory address
    std::cout << "*namePtr: " << *namePtr << std::endl;//dereference operator
    std::cout << "pizzas: " << pizzas << std::endl;//memory address

    return 0;
}