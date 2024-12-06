// Lab4.cpp
// Lab 4 - Story Implementation
// Name: [Your Name]
// Course: [Your Course Name]
// Semester: [Your Semester Name]

#include <iostream>
#include <iomanip>
#include <limits>

const int MAX_SIZE = 100; // Maximum size of the array

void displayProgramInfo() {
    std::cout << "Program Title: Lab 4\n";
    std::cout << "Name: [Your Name]\n";
    std::cout << "Course: [Your Course Name]\n";
    std::cout << "Semester: [Your Semester Name]\n\n";
}

int getUserInput(int array[], int& count) {
    std::cout << "Enter integral values (0 to stop, negative to retry):\n";
    count = 0;
    while (count < MAX_SIZE) {
        int value;
        std::cout << "Enter a value: ";
        std::cin >> value;

        if (value == 0) break;
        if (value < 0) {
            std::cout << "You must enter a value >= 0.\n";
        } else {
            array[count++] = value;
        }
    }
    return count;
}

int getLargest(const int array[], int count) {
    int maxVal = array[0];
    for (int i = 1; i < count; ++i) {
        if (array[i] > maxVal) maxVal = array[i];
    }
    return maxVal;
}

int getSmallest(const int array[], int count) {
    int minVal = array[0];
    for (int i = 1; i < count; ++i) {
        if (array[i] < minVal) minVal = array[i];
    }
    return minVal;
}

int getSum(const int array[], int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += array[i];
    }
    return sum;
}

double getMean(const int array[], int count) {
    int sum = getSum(array, count);
    return static_cast<double>(sum) / count;
}

void displayValues(const int array[], int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << array[i] << "\t";
        if ((i + 1) % 10 == 0) std::cout << "\n";
    }
    std::cout << "\n";
}

void addValues(int array[], int& count) {
    std::cout << "Insert new values (0 to stop, negative to retry):\n";
    while (count < MAX_SIZE) {
        int value;
        std::cout << "Enter a value: ";
        std::cin >> value;

        if (value == 0) break;
        if (value < 0) {
            std::cout << "You must enter a value >= 0.\n";
        } else {
            array[count++] = value;
        }
    }
}

char displayMainMenu() {
    char choice;
    std::cout << "\nMain Menu\n";
    std::cout << "---------------------\n";
    std::cout << "A) Add\n";
    std::cout << "L) Largest\n";
    std::cout << "S) Smallest\n";
    std::cout << "M) Mean\n";
    std::cout << "V) View\n";
    std::cout << "I) Insert\n";
    std::cout << "Q) Quit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return std::toupper(choice);
}

int main() 
{
   
}
