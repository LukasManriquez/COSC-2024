#include <iostream>

// Entry point
int main()
{

    // output a message - 1
    std::cout << "hello World" << std::endl;

    //message - 2
    std::cout << "hello" << " " << "world" << std::endl;

    //message - 3
    std::cout << "hello";
    std::cout << " ";
    std::cout << "world";
    std::cout << std::endl;

    //message - 4
    std::cout << "hello\tworld\n";
    std::cout << "hello \"bob\"";

    //file paths
    std::cout << "C:\\windows\\temp";
    // std::cout << R"c:\window\temp";

    //varuables - named memory location to store data 
 

    // declaration - tell compiler a variable exists 
    //scope - lifetime of a variable/ identifier: point of declaration to end if block
    int length;
    length = 0;

    int releaseYear = 1900;

    int rating = 3, stars = 5; 

    std::cout << length; 
}