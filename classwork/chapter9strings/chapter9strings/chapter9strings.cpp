#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>  //Char type functions from C

//Character sets - maps numeric values to characters
//  ASCII (7-bit) 0-127 (char)
//  ANSI (1 byte) 0-255 (char)
//  MBCS (1-4 bytes, multi-byte character set) - for localization (char)
//    Each byte has to be examined to determine if subsequent bytes are needed for full char
//  Unicode (2 bytes, Windows, or 4 bytes) - all languages in world (wchar_t)

bool IsIdentifier(char input)
{
    return isalnum(input) || input == '_';
};

bool IsIntegral(std::string const& value)
{
    //for (int index = 0; index < value.length(); ++index)
    for (char ch : value)
        if (!isdigit(ch))
            return false;

    return true;
};

bool IsValidIdentifier(std::string const& value)
{
    for (char ch: value)
        if (!isalnum(ch) && ch != '_')
            return false;

    return true;
};

void StringDemo()
{
    while (true)
    {
        std::string input;
        std::cout << "Enter a value: ";
        std::getline(std::cin, input);

        std::cout << "Integer = " << IsIntegral(input) << std::endl;
        std::cout << "Identifier = " << IsValidIdentifier(input) << std::endl;
    };
};

void CharDemo()
{
    while (true)
    {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;

        //Classification ::= int func ( int )        
        // 
        // isalpha - true if letter, false otherwise
        // isdigit - true if digit, false otherwise
        std::cout << "Alpha = " << (isalpha(input) ? 'Y' : 'N') << std::endl;  //Letter
        std::cout << "Digit = " << (isdigit(input) ? 'Y' : 'N') << std::endl;  //Digit
        std::cout << "Letter/Digit = " << (isalnum(input) ? 'Y' : 'N') << std::endl;  //Letter or digit
        std::cout << "Lower = " << (islower(input) ? 'Y' : 'N') << std::endl;  //Lower case letter
        std::cout << "Upper = " << (isupper(input) ? 'Y' : 'N') << std::endl;  //Upper case letter
        std::cout << "Space = " << (isspace(input) ? 'Y' : 'N') << std::endl;  //Space
        std::cout << "Id = " << (IsIdentifier(input) ? 'Y' : 'N') << std::endl;  //Space

        //Conversion ::= int func ( int )
        std::cout << "Lower = " << tolower(input) << std::endl;  //Convert to lower case
        std::cout << "Upper = " << toupper(input) << std::endl;  //Convert to upper case
    };
}

void WideCharDemo()
{
    while (true)
    {
        wchar_t input;
        std::cout << "Enter a character: ";
        std::wcin >> input;

        //Classification ::= int func ( int )        
        // 
        // isalpha - true if letter, false otherwise
        // isdigit - true if digit, false otherwise
        std::cout << "Alpha = " << (iswalpha(input) ? 'Y' : 'N') << std::endl;  //Letter
        std::cout << "Digit = " << (iswdigit(input) ? 'Y' : 'N') << std::endl;  //Digit
        std::cout << "Letter/Digit = " << (iswalnum(input) ? 'Y' : 'N') << std::endl;  //Letter or digit
        std::cout << "Lower = " << (iswlower(input) ? 'Y' : 'N') << std::endl;  //Lower case letter
        std::cout << "Upper = " << (iswupper(input) ? 'Y' : 'N') << std::endl;  //Upper case letter
        std::cout << "Space = " << (iswspace(input) ? 'Y' : 'N') << std::endl;  //Space
        //std::cout << "Id = " << (IsIdentifier(input) ? 'Y' : 'N') << std::endl;  //Space

        //Conversion ::= int func ( int )
        std::cout << "Lower = " << towlower(input) << std::endl;  //Convert to lower case
        std::cout << "Upper = " << towupper(input) << std::endl;  //Convert to upper case
    };
}

// *c* strings -
// c++ strings only work in c++
// #include <cstring>
// strlen (const char*) size_t ::= returns number of characters
void CStringDemo()
{
    const char* name = "Bob";  // const char*
    char nameArray[] = "Bob";


    const int MaximunName = 101;
    char buffer[MaximunName] = {0};

    char firstName[MaximunName] = {10};
    std::cout << "Enter first name: ";
    std::cin >> buffer;


    int len = strlen(buffer);
    buffer[len++] = ' ';

    char lastName[MaximunName] = {0};
    std::cout << "Enter last name: ";
    std::cin >> &buffer[len];

    char fullName[MaximunName + MaximunName] = {0};

   // strcpy(fullName, firstName);

    strncpy_s(fullName, firstName, MaximunName);
    strcat_s(fullName, " ");
    strncat_s(fullName, lastName, MaximunName);

    std::cout << fullName << std::endl;

   // comparison
   // if (firstName == lastName)
    if (_stricmp(firstName, lastName) == 0)
        std::cout << lastName << std::endl;
    else
        std::cout << firstName << std::endl;

    //find in string 
    char productName[] = "Microsoft Windows 11";
    char operatingSystem[] = "Windows";

    char* pPos = strstr(productName, operatingSystem);
    if (pPos != nullptr)
    std::cout << pPos << std::endl;

};

void numberStringDemo()



{
    while (true)
    {
        char buffer[100] = {0};

        std::cout << "Enter a number: ";
        std::cin >> buffer;
        //conversion
        //atol(const char*) int :: converts string to int 
        //atol(const char*) long :: conversts string to ling, or 0
        //atol(const char*) double :: conversts string to double
        // bool isNumber = isIntergral()
        int value = atol(buffer);
        std::cout << " value as int = " << value << std::endl;


    }
}

void PlusPlusStringDemo()
{
   
  //  char firstName[MaximunName] = {10};
    std::string firstName;
    std::cout << "Enter first name: ";
    std::cin >> firstName;


        int len = strlen(buffer);
    buffer[len++] = ' ';

  //  char lastName[MaximunName] = {0};
    std::string lastName;
    std::cout << "Enter last name: ";
    std::cin >> lastName;

  //  char fullName[MaximunName + MaximunName] = {0};
        std::string fullName;

    fullName = firstName;
 //   strncpy_s(fullName, firstName, MaximunName);
    fullName += " ";

   // strcat_s(fullName, " ");

    fullName.append(lastName);
   // fullName += lastName
  //  strncat_s(fullName, lastName, MaximunName);
    std::string middleName;
    //middle name
    int index = fullName.find(" ");
    fullName.insert(index, middleName);

    std::cout << fullName << std::endl;

    // gets last name
    std::string onlyLastName = fullName.substr(index + 1);

    const char* pcString = fullName.c_str(); // get pointer to underlying buffer
    int len = fullName.length();    // length in characters
    bool isEmpty = fullName.empty(); // is there a string 
    fullName.clear();  // emtpies the string
    //fullname = "";


};

int main()
{
    //CharDemo();
    //WideCharDemo();
    //StringDemo();
    //CStringDemo();
    numberStringDemo();

}