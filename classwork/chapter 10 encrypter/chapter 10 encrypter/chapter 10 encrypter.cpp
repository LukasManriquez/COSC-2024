#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string getFileName(const char* message)
{
    std::cout << message;
    std::string filename;
    std::getline(std::cin, filename);
}

void decrypt(std::fstream& input, std::fstream& output, char key)
{
    //caesar cipher (additive cipher)
    while (!input.eof())
    {
        char ch;
        input.get(ch);

        if (input.fail())
            input.clear();

        ch -= key;

        output.put(ch);
    }


}

void Encrypt(std::fstream& input, std::fstream& output, char key)
{
    //caesar cipher (additive cipher)
    while (!input.eof())
    {
        char ch;
            input.get(ch);

        ch += key;

        output.put(ch);
    }


}

void getinputfile(std::fstream& input)
{
    do
    {
        std::string inputFilename = getFileName("Enter input file ");

        input.open(inputFilename, std::ios_base::in);

        //error checking function
        //.fail(0 -> true if failed otherwise false for the last file operation
        // .bad() -> true if faled otherwise false for the last file operation
        // .good() -> true if last file operation succedded or false otherwise
        // if (!input.fail())


        if (input.is_open())
            return;

        std::cout << "Error opeing file";
    } while (true);

}

void getoutputfile(std::fstream& output)
{
    do
    {
        std::string inputFilename = getFileName("Enter outut file ");

        output.open(inputFilename, std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);

        //error checking function
        //.fail(0 -> true if failed otherwise false for the last file operation
        // .bad() -> true if faled otherwise false for the last file operation
        // .good() -> true if last file operation succedded or false otherwise
        // if (!input.fail())


        if (output.is_open())
            return;

        std::cout << "Error opeing file";
    }while (true);

}

enum direction
{
    encryptMode,
    decryptMode

};

direction()
{
    std::cout << "(E)ncrypt or (D)ecrpt"

        do
        {
            char ch;
            std::cin >> ch;
            switch[ch]
                {
                    case "E";
                        case "e" return direction::encryption

                            case "D"
                            case "d" return direction::decrypt
                }
        }
}

int main()
{
   
    std:: string outputFilename = getFileName("Enter output file:");

    std::fstream inputFile;

    std::fstream outputFile;
    getoutputfile(outputFile);

    directnion mode = getdirection();
    switch
    {
        case direction::EncryptionMode:Encrypt(inputfile)
        case direction::DecryptMode: decrypt(inputfile)
   }


    Encrypt(inputFile, outputFile, 56);
}
