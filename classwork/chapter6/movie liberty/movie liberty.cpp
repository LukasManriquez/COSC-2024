// file header must be on top it must be on line 1
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//movie: title, Actors, Run length, Description, Genres, Directors(s), Release Year, MPAA rating
struct Movie
{
    // required
    string Title;

    // at least 0 minutes
    int RunLength;

    //optional
    string Description;

    // >= 1900
    int ReleaseYear;

    bool IsClassic;

    string Genre;
};

enum MenuCommand
{
   // MC_begin,
    Addmovie = 1,          
    EditMovie,
    DeleteMovie,
    ViewMovie,
   // MC_End
};

//function definition - defines a function and what is does 
// decleration ::= declares the existence of something and what is it  (variable declerations)
//                 used by the compiler to reconize the use of the identifier 
//                 must be declared before usage 
// definition ::= what it does (variable defined)  (for linker) 
// functions names are varbs respresenting actions
///       casing:: pascal casing, camel casing 

/// @brief displays main menu
void DisplayMenu()
{
    cout << "Movie Library" << endl;
    cout << "----------------" << endl;
    cout << "A)dd Movive" << endl;
    cout << "E)dit Movie" << endl;
    cout << "D)elete Movie" << endl;
    cout << "V)iew Movie" << endl;
}
/// @brief  handles the menu selection
void Handlemenu()
{
    // HACK: FIX THIS 
    MenuCommand menuCommand = (MenuCommand)0;
    switch (menuCommand)
    {
        case  MenuCommand::Addmovie:
        case  MenuCommand::EditMovie:
        case  MenuCommand::DeleteMovie:
        case  MenuCommand::ViewMovie: cout << "not implemeted" << endl; break;
    };
}

int main()
{
    // function call ::= id ():
    DisplayMenu();

    //get input
    MenuCommand menuCommand = (MenuCommand)0;
    do
    {
        char input;
        cin >> input;

        switch (input)
        {
            case 'A':
            case 'a': menuCommand = MenuCommand::Addmovie; break;

            case 'E':
            case 'e': menuCommand = MenuCommand::EditMovie; break;

            case 'D':
            case 'd': menuCommand = MenuCommand::DeleteMovie; break;

            case 'V':
            case 'v': menuCommand = MenuCommand::ViewMovie; break;

            default: cout << "Bad input" << endl; break;
        };
    } while (menuCommand == 0);
    cin.ignore();
    // handle menu command
    Handlemenu(); 
  /*  switch (menuCommand)
    {
        case  MenuCommand::Addmovie:
        case  MenuCommand::EditMovie:
        case  MenuCommand::DeleteMovie:
        case  MenuCommand::ViewMovie: cout << "not implemeted" << endl; break;
    };*/
    /// add a new movie
    //create a new movie
    Movie movie; // = {0};

    // get required title 
    do
    {
        cout << "enter a title ";
        getline(cin, movie.Title);

        if (movie.Title == "")
            cout << "ERROR: Title is required" << endl;
    } while (movie.Title == "");

    // get run length, at leas 0, minutet
    do
    {
        cout << "Enter run length (in minutes): ";
        cin >> movie.RunLength;

        if (movie.RunLength < 0 || movie.RunLength > 1440)
            cout << "ERROR: Run length must be between 0 and 1440" << endl;
    } while (movie.RunLength < 0 || movie.RunLength > 1440);

    // realwase year at least 1900
    while (movie.ReleaseYear < 1900 || movie.ReleaseYear > 2100)
    {
        cout << "Enter release year (1900+): ";
        cin >> movie.ReleaseYear;


        if (movie.ReleaseYear < 1900 || movie.ReleaseYear > 2100)

            cout << "ERROR: Release year must be between 1900 and 2100" << endl;
    };
    //get optional description
    cout << "Enter optional description: ";
    cin.ignore();
    getline(cin, movie.Description);

    //get is classic
    bool done = false;
    while (!done)
    {
        char isClassic;
        cout << "Is this a classic (Y/N)";
        cin >> isClassic;

        switch (isClassic)
        {
            case 'Y':
            case 'y':movie.IsClassic = true; done = true; break;

            case 'N':
            case 'n':movie.IsClassic = false; done = true; break;

            default:;
            {
                cout << "ERROR: You must enter Y or N ";
            };
        };
    };
    cin.ignore();

    for (int Index = 0; Index < 5; ++Index)  // start at 0 , end at < 5(any number) 
    {
        cout << "Enter optional genre " << (Index + 1) << ": ";

        string genre;
        getline(cin, movie.Genre);
        if (genre == "")
        {
            break;

            movie.Genre += genre + ", ";
        }
    };

    // display movie detals
    cout << "---------------" << endl;
    cout << movie.Title << " (" << movie.ReleaseYear << ")" << endl;
    cout << "Run Length (mins) " << movie.RunLength << endl;

    cout << "Is Classic? " << (movie.IsClassic ? "yes" : "No") << endl;
    if (movie.Genre != "")
        cout << "Genre(s) " << movie.Genre << endl;
    if (movie.Description != "")
        cout << movie.Description << endl;
    cout << "---------------" << endl;
}

