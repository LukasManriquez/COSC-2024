#include <iostream>
#include <iomanip>

using namespace std;

void displayProgramInfo() 
{
    cout << "Welcome to the Falling Distance Calculator!" << endl;
    cout << "This program calculates the distance an object falls over a specified time period." << endl;
}

int getFallingTime() 
{
    int time;
    do {
        cout << "Please enter the falling time in seconds (1-60): ";
        cin >> time;
        if (time < 1 || time > 60 || cin.fail()) {
            cout << "Error: Please enter a valid time between 1 and 60 seconds." << endl;
            cin.clear();
            cin.ignore(10, '\n');
        }
    } while (time < 1 || time > 60);
    return time;
}

double calculateFallingDistance(int time) 
{
    const double g = 9.8;
    return 0.5 * g * time * time;
}

bool getUnits()
{
    char choice;
    do {
        cout << "Do you want the results in meters or feet? (m/f): ";
        cin >> choice;
        choice = tolower(choice);
        if (choice != 'm' && choice != 'f') 
        {
            cout << "Error: Please enter 'm' for meters or 'f' for feet." << endl;
        }
    } while (choice != 'm' && choice != 'f');
    return (choice == 'f');
}


int main() 
{

    displayProgramInfo();

    int time = getFallingTime();

    bool inFeet = getUnits();

    displayFallingDistanceTable(time, inFeet);

    return 0;
}