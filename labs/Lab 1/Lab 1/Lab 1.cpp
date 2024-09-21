 #include <iostream>
#include <iomanip>
#include<string>
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
    cout << endl;
    cout << "Enter 4 lab grades (0-100): " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Lab Grade " << (i + 1) << ": ";
        cin >> labGrades[i];
    }



    //exam grades
    cout << endl;
        cout << "Enter 3 exam grades (0-100): " << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "exam Grade " << (i + 1) << ": ";
            cin >> examGrades[i];

        }

        cout << endl;
        cout << "Enter participation grade (0-100): ";
        cin >> participationGrade;
       
        
        cout << "Enter final exam grade (0-100): ";
        cin >> finalExamGrade;

        //lab average
        cout << endl;
        double labSum = 0;
        for (int i = 0; i < 4; ++i) {
            labSum += labGrades[i];
        }
        double labAverage = labSum / 4;
        
        //exam avarage
        cout << endl;
        double examSum = 0;
        for (int i = 0; i < 3; ++i) {
            examSum += examGrades[i];
        }
       
        double examAverage = examSum / 3;

       
        double classAverage = (labAverage * 0.65); (examAverage * 0.20); (participationGrade * 0.20); (finalExamGrade * 0.20);

        cout << endl;
        cout << name;
        cout << ", your Lab Grades are" << endl;
        for (int i = 0; i < 4; ++i) {
            cout << "Lab Grade " << (i + 1) << ": " << labGrades[i] << endl;
        }
        cout << "Lab Average: " << fixed << setprecision(2) << labAverage << endl;

        cout << endl;
        cout << name;
        cout << ", your Exam Grades are" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "Exam Grade " << (i + 1) << ": " << examGrades[i] << endl;
        }
        cout << "Exam Average: " << fixed << setprecision(2) << examAverage << endl;

        cout << endl;
        cout << name;
        cout << ", your other grades are";
        cout << "\nParticipation Grade: " << participationGrade << endl;
        cout << "Final Exam Grade: " << finalExamGrade << endl;

        cout << "Class Average: " << fixed << setprecision(2) << classAverage << endl;
    }