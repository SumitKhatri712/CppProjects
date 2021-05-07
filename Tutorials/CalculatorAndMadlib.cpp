#include <iostream>

using namespace std;

void mathOperations()
{
    //Calculator
    int num1, num2;
    //get a number and store is in num1 variable
    cout << "Enter first number: ";
    cin >> num1;

    //get another number and store is in num2 variable
    cout << "Enter Second number: ";
    cin >> num2;

    //Show All basic math operations on num1 and num2
    cout << "The sum of the 2 numbers is " << num1 + num2 << endl;
    cout << "The difference of the 2 numbers is " << num1 - num2 << endl;
    cout << "The product of the 2 numbers is " << num1 * num2 << endl;
    cout << "The quotient of the 2 numbers is " << num1 / num2 << endl;
}

void madlibGame()
{
    //Mad libs game

    string color, object, person;
    cin.ignore();

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a object name: ";
    getline(cin, object);
    cout << "Enter a person name: ";
    getline(cin, person);

    cout << "Roses are " << color << endl;
    cout << object << " are blue" << endl;
    cout << "I love " << person << endl;
}

int Calculator()
{
    int result, num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    cin >> num1;

    std::cout << "Enter operation(+, -, *, /): ";
    cin >> operation;

    std::cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+')
    {
        result = num1 + num2;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        result = num1 / num2;
    }
    else
    {
        std::cout << "Invalid operation";
    }
    std::cout << result;
    return result;
}

int main()
{
    Calculator();
    return 0;
}