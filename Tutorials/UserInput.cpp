#include <iostream>

using namespace std;

int main()
{
    int age;                                         //
    string name;                                     //
    cout << "Tell me your name: ";                   //
    cin >> name;                                     //'cin' command is used to get user input; with >> signs
    cout << "Now tell me your age: ";                //
    cin >> age;                                      //
    cout << "So your name is " << name << endl;      //
                                                     //another way to get input is getline
    cout << "What would you like me to call you?: "; //
    /*getline(cin, name);*/                          //This getline() doesn't work
    cin.ignore();                                    //
    getline(cin, name);                              //This worked....use cin.ignore() before getting user input
    cout << "Hello " << name;                        //
    return 0;
}