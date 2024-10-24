#include <iostream>
#include <string>
#include <iomanip>

struct Point
{
    int x;
    int y;
};
struct Rectangle
{
    Point topLeft;
    Point bottomRight;
        
};
void Display(Point point)
{
    std::cout << "(" << point.x << "," << point.y << ")";

}
void Display(Rectangle rect)
{
    //std::cout << "(" << rect.topLeft.x << "," << rect.topLeft.y << ")";
    std::cout << "(";
    Display(rect.topLeft);
    std::cout << " ";
    Display(rect.bottomRight);
    std::cout << ")" << std::endl;

};
void Translate(Rectangle& rect, int offsetX, int offsetY)
{
    rect.topLeft.x += offsetX;
    rect.bottomRight.x += offsetX;

    rect.bottomRight.x += offsetY;
    rect.bottomRight.x += offsetY;

}
void TestPassByReference()
{
    Rectangle rc;;
    rc.topLeft.x = 10;
    rc.topLeft.y = 20;

    rc.bottomRight.x = 100;
    rc.bottomRight.y = 75;

    Display(rc);

    Translate(rc, 5, 10);
    Display(rc);
}
int main()
{
    //array is a set of related data
    // all elemets must be the same type 
    const int MaxStudents = 100;   // solve maintenace issue of array size
    std::string students[MaxStudents];

    /*std::string student1;
    std::string student2;
    std::string student3;*/


    //store roster of students
    for (int index = 0; index< MaxStudents ; ++index)
    {
        std::string student;
        std::cout << " Enter student name: ";
        getline(std::cin, student);
        if (student == "")
            break;

        //students at index 0, is first element
        ///students sub 0
        //array access operator
        students[index] = student;

       // std::cout << student << std::endl;
    }

    for (int index = 0; index < MaxStudents; ++index)
    {
        if(students[index] != "")
        std::cout << students[index] << std::endl;
    }
     
}

