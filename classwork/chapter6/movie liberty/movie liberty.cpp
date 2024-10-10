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
   MC_Addmovie = 1,          
   MC_EditMovie,
   MC_DeleteMovie,
   MC_ViewMovie,
   // MC_End
};

//function definition - defines a function and what is does 
// decleration ::= declares the existence of something and what is it  (variable declerations)
//                 used by the compiler to reconize the use of the identifier 
//                 must be declared before usage 
// definition ::= what it does (variable defined)  (for linker) 
// functions names are variables respresenting actions
///       casing:: pascal casing, camel casing 

// Hack: dont do this
MenuCommand g_menuCommand = (MenuCommand)0;     //teacher say never use unless you want to lose point
Movie g_movie;

void AddMovie()
{
    Movie movie; 

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

    //HACK DONT DO THIS
    g_movie = movie;
}
void DeleteMovie()
{
    cout << "DeleteMovie" << endl;
}

void EditMovie()
{
    cout << "EditMovie" << endl;
}

void ViewMovie(Movie movie)
{
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


/// @brief displays main menu and gets user input
void DisplayMenu()
{
    cout << "Movie Library" << endl;
    cout << "----------------" << endl;
    cout << "A)dd Movive" << endl;
    cout << "E)dit Movie" << endl;
    cout << "D)elete Movie" << endl;
    cout << "V)iew Movie" << endl;

   MenuCommand menuCommand = (MenuCommand)0;
    do
    {
        char input;
        cin >> input;

        switch (input)
        {
            case 'A':
            case 'a': menuCommand = MenuCommand::MC_Addmovie; break;

            case 'E':
            case 'e': menuCommand = MenuCommand::MC_EditMovie; break;

            case 'D':
            case 'd': menuCommand = MenuCommand::MC_DeleteMovie; break;

            case 'V':
            case 'v': menuCommand = MenuCommand::MC_ViewMovie; break;

            default: cout << "Bad input" << endl; break;
        };
    } while (menuCommand == 0);
    cin.ignore();

    // hack: don't do this
    g_menuCommand = menuCommand;
}

// Parameters - data passed to a function
// parameter-list ::= parameter { , parameter }*
// parameter      ::= T [ id ]

/// @brief  handles the menu selection
/// @param menuCommand
void HandleMenu(MenuCommand menuCommand)
{
    switch (menuCommand)
    {
        case  MenuCommand::MC_Addmovie: AddMovie(); break;
        case  MenuCommand::MC_EditMovie: EditMovie(); break;
        case  MenuCommand::MC_DeleteMovie: DeleteMovie(); break;
        case  MenuCommand::MC_ViewMovie:  ViewMovie(g_movie); break;
    };
}

int main()
{
    do
    {
    // function call ::= id ():[
        DisplayMenu();

        // handle menu command
        HandleMenu(g_menuCommand);
    } while (true);
};

