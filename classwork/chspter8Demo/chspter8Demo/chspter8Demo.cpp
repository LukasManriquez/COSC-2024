#include <iostream>
#include <iomanip>
#include <string>



void emptyDemo()
{

    float payRate = 12.50;

    //always int
     //   float* pPayRate = NULL;   // C, old school not recommanded 
    float* pPayRate = nullptr;   // C++, recommanded

    std::cout << pPayRate << " = ";

  //  if(pPayRate != nullptr)
//  if (ptr != NULL)    // not recommanded
// if(ptr)
    // if (pPayRate != nullptr)
    if (pPayRate)
        std::cout << *pPayRate;
    std::cout << std::endl;
}

struct Employee
{
    int Id;
    std::string Name;
    int DummyValues[1000];
};

void DynamicMemeoryDemo()
{
    const int MaxEmployees = 100;
    Employee* employee[MaxEmployees] = (0);
    int id = 1000;

  //  int numberOfEmployees = 0;
    for (int index = 0; index < MaxEmployees; ++index)
    {
        std::string name;
        std::cout << "Enter name or empty to quit: ";
        std::getline(std::cin, name);

        if (name == "")
            break;

        //add to array 
        Employee* employee = new Employee;

      //  (*employee).Id = ++id;
        employee->Id = ++id;
        employee->Name = name;
        employees[index] = employee;
       // ++numberOfEmployees;
    }
    //print employee
    for (int index = 0; index < MaxEmployees; ++index)
    {
        if (employee[index] == nullptr)
        std::cout << "[" << employee[index]->Id << "]" << employee[index]->Name << std::endl;
    }
    //ensure that any memory allocated by new os cleanded up by using delete
    for (int index = 0; index < MaxEmployees; ++index)
    {

        if (employee[index] == nullptr)
            break;
        Employee* employee = employees[index];
        delete employee;
        employee[index] = nullptr;
            delete employee[index]; //works

        //    deleate &index; // bad will happen
    }
}
int main()
{
  //  StackDemo();
  //  emptyDemo();   
      DynamicMemeoryDemo();
}