#include <iostream>

using namespace std;

int main()
{
    //Pointers are 'memory addreses' of data in our program
    //Like the variable age with value 17 is stored at a specific location in RAM
    //You can use & to access a variables pointer
    int age = 17;
    string name = "sumit";

    cout << "Age: " << &age << endl;   //Print the pointer of 'age' variable
    cout << "Name: " << &name << endl; // 'name' pointer

    //syntax for storing pointers
    double pi = 3.1428;
    double *pPi = &pi;
    cout << pPi << endl;

    //derefrencing a pointer = Getting the value from the pointer adddress
    cout << *pPi << endl; //Prints the value from pointer address
    cout << pPi << endl;  //Prints the pointer string or int
    cout << *&pi << endl; //same as pPi value
    return 0;
}