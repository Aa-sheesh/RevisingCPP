#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text;

int main()
{

    /*typedef - reserved keyword used to create an additional name(alias) for an existing data type.
              - New identifier for an existing data type.
              - Makes code more readable and reduces typos
    */

    // Now, we can use pairlist_t instead of std::vector<std::pair<std::string,int>>
    // pairlist_t pairlist;

    text name = "Aashish";
    std::cout << name << std::endl;
    return 0;
}