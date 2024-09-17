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
  

  // decision making - IF statment 
  //if-stmt ::= 

    /// add a new movie
    //create a new movie
    Movie movie; // = {0};
  
    // get required title
    cout << "enter a title";
    //cin >> movie.Title
    getline(cin, movie.Title);

    ;if (movie.Title == "")   //; 
    {
        cout << "ERROR: Title is required" << endl;

        cout << "Enter a Title: ";
        getline(cin, movie.Title);

    };

        ///// display movie detals
            ;cout << "---------------" << endl; //;
        cout << movie.Title << endl;
}