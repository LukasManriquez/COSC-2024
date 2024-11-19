#include <iostream>
#include <iomanip>
#include <string>
#include <cctype> // char type function form c
#include <cwch>

bool IsIdentifier(char input)
{
    return isalnum(input) || input == '_';
}

bool isIntergral(std::string const& value)
{
   // for ()int index = 0; index < value, length(); ++index)

    for (char ch : value)
        if (isdigit(ch))
            return false;

    return true;
};

bool isValidItentifier(std::string const& value)
{
    for (char ch : value)
        if (!isalnum) && ch != '_')
        return false;

            return true;



}

void stringDemo()
{
    while (true)
    {
        std::string input;
        std::cout << "Enter a vale: ";
        std::getline(std::cin, input);
        
        std::cout << "integer = " << isIntergral(input) << std::endl;
        std::cout << "identifier = " << isValidItentifier(input) << std::endl;

    }
}

void charDemo()
{
    while (true)
    {
        char input;
            std::cout << "Enter a Character";
        std::cin >> input;

        // classifcatuion

        std::cout << "Alpha = " << (isalpha(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Digit = " << (isdigit(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Letter/Digit = " << (isalnum(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "lower = " << (islower(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "upper = " << (isupper(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "space = " << (isspace(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "ID = " << (IsIdentifier(input) ? 'Y' : 'N') << std::endl;;

       // conversion ::= int func ( int )
        std::cout << "lower = " << (tolower(input) << std::endl; //conver to lower case
        std::cout << "upper = " << (toupper(input) << std::endl; //conver to upper case


    };

};

void wideCharDemo()
{
    while (true)
    {
        wchar_t input;
        std::cout << "Enter a Character";
        std::wcin >> input;

        // classifcatuion

        std::cout << "Alpha = " << (iswalpha(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Digit = " << (iswdigit(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Letter/Digit = " << (iswalnum(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "lower = " << (iswlower(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "upper = " << (iswupper(input) ? 'Y' : 'N') << std::endl;;
        std::cout << "space = " << (iswspace(input) ? 'Y' : 'N') << std::endl;;

       // conversion ::= int func ( int )
        std::cout << "lower = " << (tolower(input) << std::endl; //conver to lower case
        std::cout << "upper = " << (toupper(input) << std::endl; //conver to upper case


    };

};

int main()
{
    charDemo();

}