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
};

enum MenuCommand
{
    MC_Addmovie,
    MC_editmovie,
    MC_Deletemovie,
    MC_Viewmovie,

};

int main()
{
    // relational demo
    //rel_op :: = < <=    > >=    == !=
    //rel_expr :: E rel_op E (boolean)

  //  // int left, right;
  //  string left, right;
  //  cout << "Enter a left and right value";
  //  cin >> left >> right;

  //  //mangle the values
  //  // do not use == equality floating point values to avoid rounding errors
  //  //except when comparing floating point value to an intergarl (e.g. f ==45)
  // /* left = (left * 21) / 21;
  //  right = (right * 15) / 15;*/

  // // bool areEqual = left = right == 20;
  // // bool areEqual = left = 20 = right;

  //  //string comparison for case insensitive
  //  //strcmpi (string, string ) => int
  //  // when using c++ strings specify value as 'expr' .c_str()
  //  //    returns < 0 if left < right
  //  //            = 0 if left == right
  //  //            > 0 if left > right
  //  cout << left << " ciequal " << right << " = " << _strcmpi(left.c_str(), right.c_str()) << endl;
  //  cout << left << " == " << right << " = " << (left == right) << endl;
  // cout << left << " < " << right << " = " << (left < right) << endl;
  // cout << left << " <= " << right << " = " << (left <= right) << endl;
  // cout << left << " > " << right << " = " << (left > right) << endl;
  // cout << left << " >= " << right << " = " << (left >= right) << endl;
  // cout << left << " != " << right << " = " << (left != right) << endl;
  // cout << endl;

    //show menu
    cout << "Movie Library" << endl;
    cout << "----------------" << endl;
    cout << "A)dd movive" << endl;
    cout << "E)dit Movie" << endl;
    cout << "D)elete Movie" << endl;
    cout << "V)iew Movie" << endl;

    //get input
    char input;
    cin >> input;

    MenuCommand menuCommand

    switch (input)
    {
        case 'A':
        case 'a': menuCommand = 1; break;

        case 'E':
        case 'e': menuCommand = 2; break;

        case 'D':
        case 'd': menuCommand = 3; break;

        case 'V':
        case 'v': menuCommand = 4; break;

        default: cout << "Bad input" << endl; break;
    }

    /// handle menu command
   

    switch (menuCommand)
    {
        case  MenuCommand::MC_Addmovie:
        case  MenuCommand::MC_editmovie:
        case  MenuCommand::MC_Deletemovie:
        case  MenuCommand::MC_Viewmovie: cout << "not implemeted" << end; break;
    }

  // decision making - IF statment 
  //if-stmt ::= 

    /// add a new movie
    //create a new movie
    Movie movie; // = {0};
  
    // get required title
    cout << "enter a title ";
    //cin >> movie.Title
    getline(cin, movie.Title);

    ;if (movie.Title == "")   //; 
    {
        cout << "ERROR: Title is required" << endl;

        cout << "Enter a Title: ";
        getline(cin, movie.Title);
    };

    // get run length, at leas t0, minutes
    cout << "Enter run length (in minutes ) : ";
    cin >> movie.RunLength;

    // nested if 
    //if (movie.RunLength <= 0)
    //{
    //    // look at additional stuff
    //    
    //    if (movie.RunLength < 0)
    //    {
    //        cout << "ERROR: Run length must be at least 0" << endl;

    //        cout << "Enter run length (in minutes): ";
    //        cin >> movie.RunLength;
    //    };
    //}  else if (movie.RunLength > 1440)
    //{
    //    cout << "ERROR: Run length cannot be grater than a day" << endl;

    //    cout << "Enter run length (in minutes): ";
    //    cin >> movie.RunLength;
    //}

    if (movie.RunLength < 0 || movie.RunLength > 1440)
    {
        cout << "ERROR: Run length must be between 0 and 1440" << endl;

        cout << "Enter run length (in minutes): ";
        cin >> movie.RunLength;
    };


    // realwase year at least 1900
    cout << "Enter release year (1900+): ";
    cin >> movie.ReleaseYear;

   
    if (movie.ReleaseYear < 1900 || movie.ReleaseYear > 2100)
    {
        cout << "ERROR: Release year must be between 1900 and 2100" << endl;

        cout << "Enter Release yesr (1900+): ";
        cin >> movie.ReleaseYear;
    };

    //get optional description
    cout << "Enter optional description: ";
    cin.ignore();
    getline(cin, movie.Description);

    //get is classic
    char isClassic;
    cout << " is this a classic (Y/N)";
    cin >> isClassic;

   /* if (isClassic == 'Y')
     movie.IsClassic = true;
    else if (isClassic == 'y')
     movie.IsClassic = true;
    else if (isClassic == 'N')
     movie.IsClassic = false;
    else if (isClassic == 'n')
     movie.IsClassic = false;
    else*/
    // not bad but not short
   /* if (isClassic == 'Y' || isClassic == 'y')
        movie.IsClassic = true;
    else if (isClassic == 'N' || isClassic == 'n')
        movie.IsClassic = false;
    else
    {
        cout << "ERROR: You must enter Y or N ";

        cout << "Is this a classic (Y/N)";
        cin >> isClassic;
    };*/
    
   //Switch (select) statement - replacement for if-elseif where same expression compared to multiple values
    // 1. must compare a single expression to one or more constant vlues with qeuility
    // 2. switch express must be an intergral type
    // 3. each case label must be a compile-time constant expression 
    // 4. each case label must be unique
    // default must be last and will accivate if nothing else went in
    // put    break; it will break if u dont
    switch (isClassic)
            {
        case 'Y':movie.IsClassic = true; break;
        case 'y':movie.IsClassic = true; break;

        case 'N':movie.IsClassic = true; break;
        case 'n':movie.IsClassic = true; break;

        default:;
        {
            cout << "ERROR: You must enter Y or N ";

            cout << "Is this a classic (Y/N)";
            cin >> isClassic;
        }
};
    /*

    else
    {
        cout << "ERROR: You must enter Y or N ";

        cout << "Is this a classic (Y/N)";
        cin >> isClassic;
    };*/

    // display movie detals
    cout << "---------------" << endl;
    cout << movie.Title << " (" << movie.ReleaseYear << ")" << endl;
    cout << "Run Length (mins) " << movie.RunLength << endl;

    //long form -1
    // if (movie.IsClassic)
    //    cout << "Is Classic? Yes" << endl;
    //  else
    //    cout << "Is Classic? No" << endl;
    /*better but longer -2
    string classicIndicator;
    if (movie.IsClassic)
        classicIndicator = "Yes";
    else
        classicIndicator = "No";
    cout << "is Classic? " << classicIndicator << endl;
    */
    
    //shorter form using conditional operator => eb ? et : ef
   // string classicIndicator = movie.IsClassic ? "Yes" : "no";
   // cout << "Is Classic? " << classicIndicator << endl;

    //shortest  form using conditional operator => Eb ? Et : Ef
    // Et & Ef = must be the exat same type, type coercion is not allowed
    cout << "Is Classic? " << (movie.IsClassic ? "yes" : "No") << endl;

    if (movie.Description != "")
        cout << movie.Description << endl;
    cout << "---------------" << endl;
}

// && - and
// || - or
// ! - not /