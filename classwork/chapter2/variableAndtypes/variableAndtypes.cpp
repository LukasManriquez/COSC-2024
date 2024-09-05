#include <iostream>
#include <string>




struct point
{

    //declare variables - fields
    int X;
    int Y;

};



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

    int examGrade, hoursWorked;
//int exam_grade, hours_worked; DONT DO THIS
//std::cout << e

// Types
//   Defines what kind of data is stored, range, size
//   Primitives - understood by lang
// | Type | Size | Range |
// |- | - | - |
// | short | 2 | +-32767 (integral) |
// | int | 4 | +- 2 billion (default) |
// | long | 4 | +-2 billion |
// | unsigned * | * | 0-
// Floats
// | float | 4 | E+-38 | precision: 5-7 |
// | double | 8 | E+-308 | precision: 12-15 (default) |
// Text
// | char | 1 | -128 to 127 | character |
// | std::string | * | text |
// | bool | 1? | true or false |
    short s;
    int i = 0;
    long l = 5L;
    unsigned int ui = 3U;
    // float pi = 3.14159F;
    double largeNumber = 10E100;
    char c = 'A';
    std::string name = "Bob";
    bool isPassing = true;
    //int isOK = 1; //Don't do it
    int intSize = sizeof(int);

    //Assignment
    //  asn_op ::= V = E
    //  Must be type compatible
    //  Expression of type Vt
    //  Associativity - Right
    int shapeLength = 10;
    int shapeWidth = 20;
    int shapeArea;

    shapeArea = shapeLength;
    shapeWidth = 10;
    //20 = shapeWidth;

    shapeArea = shapeLength = shapeWidth = 20;

    //Arithmetic operators
    // + - * / % (int modulus)
    //  arith_op ::= Et op Et
    //   Modulus only defined for integer values
    //   Division for integers returns integers
    shapeArea = shapeLength * shapeWidth;
    int remainder = 10 % 3; // 1
    int result = 10 / 3;  // 3
    double dresult = 10.0 / 3.0;  // 3.333

    // unary_op ::= + Et | - Et
    //   Unary positive does nothing
    //   Unary negative negates the expression
    int positiveValue = 10;
    int negativeValue = -positiveValue;

    // block-statement ::= { S* }
    //   Variables declared in block are scoped to the block
    //   Useful for grouping statements
    {
        int newVariable = 10;
    }
    //std::cout << newVariable;

    //String stuff
    // Not a primitive
    std::string message = "Hello";
    message = message + "world"; //message += " world";
    // message = message + " " + name;

    std::string enmty;
    // empty = empty + "Hello"; is wrong

    //combination operators
    //   V op= E

  //  empty += " world"; // empty = empty + "world"
    
    //c++ is strongly tpyed meaning the tpye will not change on you
    //java is weak tpyed means you dont know the type
    int number = 10;
   

    //type inferencing (c++11)
    // auto ::= compiler figures it out
    // auto unable in variable decls and a few other places
    // must use an init expression when declaring the variable

    auto payRate = 45.6; //double payRate = 45.6;
    // payRate = "45.6";
        double averagePayRate = 40 / payRate;

    // area od cricle = PI*r2
    const double pi = 3.1459;
    double radius = 10;

        //constant expression = expression that is calculated at compile time, primitive
        // 4+5 * 8 = 44
        // literals are great unless you need them everywhere ( constant-expression)
        // variables are better at reuse but may be accidentally change 
        // const (constant expression) with name, type and value and read only, primitives
        double area = 3.1459 * radius * radius;
    area = pi * radius * radius;
  
   // pi = 10 ERROR

  //structure - a group of related data points
  // cannot use structs with cout
  // struct vaiables are undefined
    // promt user for a point
    //promt user for a point
    // int x, y;
   // point pt;
  point pt = {0}; // zero initialies fields // pt.X = 0: pt.Y = 0;
    std::cout << "Enter X value: ";
    pt.X = 5;
    std::cout << "Enter Y value: ";
    pt.Y = 10;

    //(5,10)
    std::cout << "(" << pt.X << "," << pt.Y << ")";
    point pt2 = pt;
    //struct assignment is value assignmet, all fields are copied

}


// declares a point as an X and Y vaule


struct point2
{
    int x;
    int y;

};
// put ; just in case your code is broken