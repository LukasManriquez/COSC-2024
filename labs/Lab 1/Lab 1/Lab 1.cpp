 #include <iostream>
#include <iomanip>
// lab 1
// lukas manriquez
// COSC 1436 Fall 2024
using namespace std;
int main()
{
    // bobs name
    string name; 
    cout << "Enter Your Name: "; 
    cin >> name;

    // number of grades ?
    int labGrades[4];
    int examGrades[3];
    int participationGrade;
    int finalExamGrade;

    //lab grades 
    cout << "Enter 4 lab grades (0-100): " << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Lab Grade " << (i + 1) << ": ";
        cin >> labGrades[i];
    }



    //exam grades
        cout << "Enter 3 exam grades (0-100): " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "exam Grade " << (i + 1) << ": ";
            cin >> examGrades[i];

        }
    }