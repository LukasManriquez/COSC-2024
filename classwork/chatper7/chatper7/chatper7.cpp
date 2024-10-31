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

//functio paramitors 'T id[]'
//c++ arrays are always open, no size
//size is always needed as param when using arrays
bool AreArrayEqual( int left[],int leftSize, int right[], int rightSize )
{
    if (leftSize != rightSize)
        return false;

    for (int index = 0; index < leftSize; ++index)
        if (left[index] != right[index])
            return false;

    return true;
}
int copyArray(int left[], int leftSize, int right[], int rightSize)
{
    int size = (leftSize < rightSize) ? leftSize : rightSize;
    for (int index = 0; index < size; ++index)
    left[index] = right[index];

    return size;
}

// array cannot be retuen type from function
void InitializeArray(int values[], int size, int initialValue)
{
    for (int index = 0; index < size; ++index)
        values[index] = initialValue;
}
void useArrayDemo()
{
    int array1[20] = {0};

   // for (int index = 0; index < 20; ++index)
     //   array1[index] = index + 1;
   /* for (int& value : array1)
        value = 1;*/
    InitializeArray(array1, 20, 2);
    //int index2 = 0;
    //while (index2 < 20)
    //{
    //    array1[index2] = ++index2;
    //};

    // for loop for iterrating arrays 
   /* for (int index = 0; index < 20; ++index)
     std::cout << array1[index] << std::endl;  */
    for (int value : array1)
        std::cout << value << std::endl;

    int array2[20] = {0};
    int array3[20] = {0};
    //compare arrays
    std::cout << (array2 == array3) << " " << AreArrayEqual(array2, 20, array3, 20) << std::endl;

    //assighnment
    /*array2 = array3;*/
    copyArray(array3, 20, array2, 20);
}

void InitArrayDemo()
{
    const int MaxRates = 100;
        double payrates[MaxRates] = {0}; //zero initalize

        //for (int index = 0; index < MaxRates; ++index)
        //    payRates[index] = 0
        // Array min = 0 & 
       // array max = size - 1

        //init days of month
        
        std::string monthNames[12] = {"Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",};
        

        int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
            //daysInMonth[0] = daysInMonth[2] = daysInMonth[4] = daysInMonth[6] = daysInMonth[7] = daysInMonth[9] = daysInMonth[11] = 31;
            //daysInMonth[1] = 28;
            //daysInMonth[3] = daysInMonth[5] = daysInMonth[8] = daysInMonth[10] = 30;
        for (int index = 0; index < 12; ++index)
        std::cout << monthNames[index] << " has " << daysInMonth[index] << " days" << std::endl;


}
void GradeArrayDemo()
{
    const int MaxGrades = 20;
    double dummyValue2 = -1;
    int grades[MaxGrades];
    double dummyValue = 0;

    int estimatedMaxArraySize = //size of array / size of element
        sizeof(grades) / sizeof(int);

    int count = 0;
    for (int index = 0; index < MaxGrades; ++index)// ++count)
    {
        std::cout << "Enter a grade: ";
        std::cin >> grades[index];

        if (grades[index] <= 0)
            break;
        ++count;
    };
    //for (int index = 0; index < MaxGrades; ++index) for entire array
        for (int index = 0; index < count; ++index)

    {
        std::cout << grades[index] << std::endl;
    }

    int indexToChange;
    do
    {
        
        std::cout << "Enter the index of grades to change: ";
        std::cin >> indexToChange;
    } while (indexToChange < 0 || indexToChange >= MaxGrades);

    int newGrade;
    std::cout << "Enter the new grade: ";
    std::cin >> newGrade;

    grades[indexToChange] = newGrade;

}

int main()
{
    useArrayDemo();
}
 
void NameArrayDemo() 
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

