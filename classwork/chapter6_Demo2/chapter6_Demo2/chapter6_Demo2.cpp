#include <iostream>
#include <string>
#include <iomanip>
//function overloading - 2 or more functions have the smae name but different signatures 

/// @brief reads an interger from console
/// <param 
/// <returns provides value by user
int ReadInt(std::string message)
{
    //display message
    //get int value nd return
    std::cout << message;

    int value;
    std::cin >> value;

        return value;
}

int ReadInt(std::string message, int minValue, int maxValue)
{
    int value;
    do
    {
        int value = ReadInt(message);
        if (value < minValue || value > maxValue)
            std::cout << " value must be between " << minValue << " and " << maxValue << std::endl;
        
    } while (value < minValue || value > maxValue);
    return value;
};

int ReadInt(std::string message, int minValue)
{
    return ReadInt(message, minValue, INT32_MAX);
    /*int value;
    do
    {
        int value = ReadInt(message);
        if (value < minValue);
            std::cout << " value must be at lest " << minValue << std::endl;
       
    } while (value < minValue);

    return value;*/
}

struct Employee
{
    int Id;
    std::string Name;

    int YearsOfService;
    double PayRate;
};

void Display(Employee employee)
{
    std::cout << employee.Name << std::endl;
    std::cout << employee.Id << std::endl;
    std::cout << "Years of service: " << employee.YearsOfService << std::endl;
    std::cout << " Pay rate " << employee.PayRate << std::endl;

    employee.YearsOfService *= 2;

}
void GivePayRaise(Employee& employee)
{
    //if years > 3, payrate +5
    //if years > 5, Payrate + 10
    if (employee.YearsOfService > 3)
        employee.PayRate += 5;
    else if (employee < 5)
        employee.PayRate += 10;
}

int main()
{
    //int value = ReadInt("Enter a value between 1 and 10: ", 1 ,10 );
    //int positive = ReadInt("enter a positive number", 0);
    //int anyValue = ReadInt("Enter a number: ");
    //int test = ReadInt("a message ", 10, 50);
    Employee employee;
        employee.Id = 10;
        employee.Name = "bob";
        employee.YearsOfService = 10;
        employee.PayRate = 20.5;

        Display(employee);
        GivePayRaise(employee);
        Display(employee);

}