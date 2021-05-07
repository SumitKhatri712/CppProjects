#include <iostream>

using namespace std;

void name(string name); //function stub/signature declaring function before giving it data
double cube(double num);

//Basic syntax of a funtion
void sayHello()
{
    std::cout << "Hello there" << std::endl;
}

//Function with arguments
void sayHelloToName(string name, string characterstic)
{
    std::cout << "Hello " << characterstic << name << std::endl;
}

int main()
{
    std::cout << "First line" << std::endl;
    sayHello();
    std::cout << "Third line" << std::endl;
    sayHelloToName(" Sumit", "Awesome");
    name("Kittu");
    cout << cube(41);

    return 0;
}

//this funtion cannot be called normally because it is below main() function
void name(string name)
{
    std::cout << "The name you gave when calling this function was " << name << std::endl;
}

//return value from funciton
double cube(double num)
{
    return num * num * num;
    //this code doesn't get executed because the return keyword ends the function
    std::cout << "HEEEELLLLOOOOO" << std::endl;
}