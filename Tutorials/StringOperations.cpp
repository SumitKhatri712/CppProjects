#include <iostream>

using namespace std;

int main()
{                                         // PRINTING STRINGS
    cout << "hello world" << endl;        // endl is used to break print lines
    cout << "Hello Asia\n";               // \n does the same thing
    cout << "Hello India ";               // without endl or \n the text will be printed on the same line
    cout << "Hello India" << endl;        //
                                          //
                                          //STRING FUNCTIONS
    string name = "The name is Retrace";  // Store strings in variable to call funtions on
    cout << name << endl;                 // Print the string in variable
    cout << name.length() << endl;        // length() funtion give the length of the string
    cout << name[0] << endl;              // Returns 'T'
    name[0] = 'S';                        // Changes 'T' to 'S'
    cout << name.find("Retrace") << endl; // Gives starting index of text in string
    name.replace(12, 8, "Sumit");         // Replace part of string with another string.
                                          // Args are replace(starting index, length of places to change, str to cahgne with)
    cout << name;                         //Print the Final output

    return 0;
}