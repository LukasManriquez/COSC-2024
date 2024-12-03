#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
void writeFileDemo()
{
    std::fstream outfile;

 //open a file for reading and/or writing 
 //"c:\\temp\\log.txt"
 // "/usr/temp/log"
    outfile.open("log.txt", std::ios_base::out | std::ios_base::app);   //opens a file for writing 

    std::string line;
    std::cout << "Enter the file contents: ";

    while (true)
    {
        getline(std::cin, line);

        if (line == "Q" || line == "q")
            break;

            //write to file
        outfile << line << std::endl;

    };

};

void readFileDemo()
{
    std::fstream infile;

    infile.open("log.txt", std::ios_base::in);

    while (!infile.eof())
    {
        std::string line;
        getline(infile, line);

        std::cout << line << std::endl;
    };
}

void Display(std::fstream output, std::string const& message)
{
    output << message;

    std::cout << message;
}

void logOutputDemo()
{
    std::fstream logFile;

    logFile.open("output.txt", std::ios_base::out | std::ios_base::app);

    Display(logFile, "Enter your name: \n");
    //std::cout << "Enter your name"

        std::string name;
    getline(std::cin, name);


    std::stringstream msg;
    msg << "Hello " << name << std::endl;
    Display(logFile, msg.str());
    //std::cout << "Hello " << name << std::endl;
  /*  Display(logFile, "Hello ");
    Display(logFile, name);
    Display(logFile, "\n");*/
}


int main()
{
   // writeFileDemo();
    readFileDemo();
}