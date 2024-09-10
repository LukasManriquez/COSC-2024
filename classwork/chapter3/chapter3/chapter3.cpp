#include <iostream>
#include <string>

int main()
{
    //get user name 
    std::string name;
    std::cout << "Enter your name: ";

    // std:: >> v
    // inserts value up to fist whitespace into variable
    // doesnt work with spaced strings
    // std::cin >> name:
    std::getline(std::cin, name);

    std::cout << "Hello " << name << std::endl;

    int hours;
    std::cout << "How many hours did you work this week? ";
    std::cin >> hours;

    double payRate;
    std::cout << "how much do you earn an hour? ";
    std::cin >> payRate;

    std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

    //multi-value input, values are withspace separated 
    int x, y;
    std::cout << "enter the X,Y values of a point: ";
    std::cin >> x >> y;

    // type coerion - compiler changes type of expression
    //no impact on runtime code generation 
    // always safe
    //Only impacts current expression 
    //type hierachy: larger of the two operand types
    // double "FIRST"
    //float
    //unsighed long
    //long
    //unsighed int
    //int "LAST"
    //char/short/unsighed short (automatic to int) 

    //double = int * double
    // double = double * double (type coercion)
    //double = double
    double result = hours * payRate;

    //Precedence rules dont apply, just find the largest type
    // double + float * int => double 

    //assighnment doesn't matter, types determind on each side of operator
    // double = int * float

    // overflow and underflow
    short smallValue = 32767 + 1; //overflow because 32767 is max
    std::cout << smallValue << std::endl;

    short largeValue = -32768 - 1; // underflow because -32768 is slowest
    std::cout << largeValue << std::endl;

    float floatValue = 1e38 * 2e20;
    std::cout << floatValue << std::endl;
}