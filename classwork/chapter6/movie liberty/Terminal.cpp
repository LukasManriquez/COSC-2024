#include <iostream>
#include <iomanip>
#include <string>
#include "Terminal.h"


/// @brief reads an integer value
/// @param message message to display
/// @param minValue minimum required value
/// @param maxValue Maximum required Vvalue
/// @return input from user 
int ReadInt(std::string message, int minValue, int maxValue)
{
    int input;
    do
    {
        std::cout << message;
        std::cin >> input;

        if (input < minValue || input > maxValue)
            std::cout << "ERROR: Run length must be between " << minValue << " and " << maxValue << std::endl;
    } while (input < minValue || input > maxValue);

    return input;
}

/// @brief reads a string from input
/// @param message message to display
/// @param isRequired true if the value is required
/// @return input from user 
std::string ReadString(std::string message)
{
    return ReadString(message, false);
}

/// @brief reads a string from input
/// @param message message to display
/// @param isRequired true if the value is required
/// @return input from user 
std::string ReadString(std::string message, bool isRequired)
{
    std::string input;
    do
    {
        std::cout << message;
        getline(std::cin, input);

        if (input == "")
            std::cout << "ERROR: Value is required" << std::endl;
    } while (isRequired && input == "");
    return input;
}

