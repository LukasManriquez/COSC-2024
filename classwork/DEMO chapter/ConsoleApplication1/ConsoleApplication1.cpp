#include <iostream>

// this mutiplys all numbers 1*2*...*n
int Factorial(int number)
{
    int result = 1; 
        for (int index = 0; index < number; ++index)
            result *= (index + 1);
        
        return result;
}

int Factorial2(int number)
{
    if (number <= 1)
        return 1;

    return number * Factorial2(number - 1);
}

void PrefixPostfixDemo()
{
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    // prefix inc := ++x +1 => x = x + 1;x
    // postfix inc := --x -1 => x - x -1; x
    // postfix inc := x++ +1 =>t T = x; x = x +1;T 
    // postfix inc := x-- -1 => T = x ; x = x -1;T
    std::cout << value++ << " ";
    std::cout << ++value << " ";
    std::cout << value-- << " ";
    std::cout << --value << " " << std::endl;
}

void DisplayTruthTable()
{
    std::cout << " A " << " B " << " && " << " || " << std::endl;

    // Conditional ::=Eb ? Et :Ef

    //false, flase 
    std::cout << false << false << (false && false ? "false" : "false") << (false || false ? "false" : " false") << std::endl;
    // false true
    std::cout << false << true << (false && true) << (false || true) << std::endl;
    //true false
    std::cout << true << false << (true && false) << (true || false) << std::endl;
    //true true
    std::cout << true << true << (true && true) << (true || true) << std::endl;
}

bool isDigit(char value)
{
    switch (value)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': return true;
    };

    return false;
}

bool isLetter(char value)
{
    if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
        return true;

    return false;
};

std::string GetCharacterClass(char value)
{
    // Identidy the charatcer
    //A-Z letter 
    //0-9 digit
    // * = symbol
    if (isDigit(value))
        return "Digit";
    else if (isLetter(value))
        return "letter";
    else
        return "symbol";

}

void SwitchDemo()
{
    do
    {
        char input; 
        std::cout << "Enter a charater: ";
        std::cin >> input;

        std::cout << GetCharacterClass(input) << std::endl;

    } while (true);
}


int main()
{
 /* std::cout << Factorial(3) << " " << Factorial2(1) << std::endl;
  std::cout << Factorial(5) << " " << Factorial2(3) << std::endl;
  std::cout << Factorial(1) << " " << Factorial2(5) << std::endl;*/

  /*  DisplayTruthTable();*/

    //PrefixPostfixDemo();
    SwitchDemo();
}