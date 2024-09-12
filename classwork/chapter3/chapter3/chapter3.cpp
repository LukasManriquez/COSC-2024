#include <iostream>
#include <string>
#include <cmath> //c math functions
#include <iomanip> // drmatted output

// include the std namespace so we don't have to prefixit it on everthing 
using namespace std;

int main()
{
   // //get user name 
   // std::string name;
   // std::cout << "Enter your name: ";

   // // std:: >> v
   // // inserts value up to fist whitespace into variable
   // // doesnt work with spaced strings
   // // std::cin >> name:
   // std::getline(std::cin, name);

   // std::cout << "Hello " << name << std::endl;

   // int hours;
   // std::cout << "How many hours did you work this week? ";
   // std::cin >> hours;

   // double payRate;
   // std::cout << "how much do you earn an hour? ";
   // std::cin >> payRate;

   // std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

   // //multi-value input, values are withspace separated 
   // int x, y;
   // std::cout << "enter the X,Y values of a point: ";
   // std::cin >> x >> y;

   // // type coerion - compiler changes type of expression
   // //no impact on runtime code generation 
   // // always safe
   // //Only impacts current expression 
   // //type hierachy: larger of the two operand types
   // // double "FIRST"
   // //float
   // //unsighed long
   // //long
   // //unsighed int
   // //int "LAST"
   // //char/short/unsighed short (automatic to int) 

   // //double = int * double
   // // double = double * double (type coercion)
   // //double = double
   // double result = hours * payRate;

   // //Precedence rules dont apply, just find the largest type
   // // double + float * int => double 

   // //assighnment doesn't matter, types determind on each side of operator
   // // double = int * float

   // // overflow and underflow
   // short smallValue = 32767 + 1; //overflow because 32767 is max
   // std::cout << smallValue << std::endl;

   // short largeValue = -32768 - 1; // underflow because -32768 is slowest
   // std::cout << largeValue << std::endl;

   // float floatValue = 1e38 * 2e20;  //Positive infinity (inf)
   // std::cout << floatValue << std::endl;

   // // typecasting - you convert an expression to another type explicitly 
   // int totalSales = 50000;
   // int departments = 8;

   // // static_cast<T>(E) => perferred
   // //  (t)E => c-style, not recommended
   // //      must be allowable
   // // double averageSalsPerDepartment = static_cast<double>(totalSales) / departments;
   // double averageSalsPerDepartment = totalSales / static_cast<double>(departments); // recommended easy to read
   // averageSalsPerDepartment = totalSales / (double)departments;

   // // compiler error, convert from string to int
   // std::string someString = "Hello";
   //// int someStringNumber = static_cast<int>(someString);
   // //int someStringNumber = (int)someString

   // // use cast to truncated data w/o compiler warning 
   // int truncatedValue = static_cast<int>(floatValue);

   // // math functions 
   // // pow(x,y) => x to the y power
   // // sqrt(x) => square root of x
   // // exp(x) => e to the x power
   // // log(x) => log of x  log(exp(x)) = x
   // // sin(x), cos(x), tan(x), cot(x), sec(), csc(x), ...h
   // //abs(x) => positive value of x
   // // ceil(x) => smallest possiable int value >=x
   // //floor(x) => largest possible int value <= x
   // // trunc(x) =>  rounds towards zero
   // // round(x) => rounds to the nearest integer (midpoint rounding)
   // double xValue = 45.6;
   // double mathResult;

   // std::cout << pow(xValue, 2) << std::endl; //xValue * xvalue
   // std::cout << sqrt(xValue) << std::endl;

   // std::cout << exp(2) << std::endl;     //e nth power, e = 2.718
   // std::cout << log(5.4) << std::endl;    // root of e 

   // std::cout << abs(-45) << std::endl;    // positive x = 45

   // std::cout << ceil(xValue) << std::endl;      //46
   // std::cout << floor(xValue) << std::endl;     //45

   // std::cout << trunc(xValue) << std::endl;   //45
   // std::cout << round(xValue) << std::endl;  // 46

   // //formatted output 
   // std::cout << 4.567891241415151 << std::endl;
   //     std::cout << 5.67e3 << std::endl;

        // create a table
// manipulator | behavior | persist
// ____________
// setw(i) | pads the value to i |   no
// left | Left justifies |    yes
// Right | Right Justifies (default) |   Yes
// fixed | forces fixed point notation |   yes
// setprecision(i) | Sets precision of floats to total digits if !fixed and decimal digits if fixed  | Yes
// setfill(c) | character to pad with |   Yes
        cout << std::left << std::setw(8) << "Student" << setw(6) << "Grade " << setw(6) << "Letter " << std::endl;
        cout << setw(20) <<setfill('-') << "" << setfill(' ') << endl;
        cout << fixed << setprecision(2);
        cout << setw(8) << "Bob" << setw(6) << 95.67  << setw(6) << "a" << endl;
        cout << setw(8) << "Sue" << setw(6) << 98.543 << setw(6) << "A" << endl;
        cout << setw(8) << "Jim" << setw(6) << 84.567 << setw(6) << "B" << endl;
        cout << setw(8) << "Jan" << setw(6) << 78.987 << setw(6) << "C" << endl;
}