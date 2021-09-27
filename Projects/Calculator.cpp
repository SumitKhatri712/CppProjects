#include <iostream>

using namespace std;

bool run = true;

float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    return num1 / num2;
}

float square(float num1)
{
    return num1 * num1;
}

void Calculate()
{
    int operation;
    float num1;
    float num2;
    string runAgain;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "Enter Operation: ('+'=1, '-'=2, '*'=3, '/'=4)";
    cin >> operation;

    switch (operation)
    {
    case 1:
        cout << add(num1, num2) << endl;
        break;

    case 2:
        cout << subtract(num1, num2) << endl;
        break;

    case 3:
        cout << multiply(num1, num2) << endl;
        break;

    case 4:
        cout << divide(num1, num2) << endl;
        break;

    default:
        cout << "Enter A valid Operation" << endl;
        break;
    }

    cout << "Run Again?(Y/N): ";
    cin >> runAgain;

    if (runAgain == "Y" || runAgain == "y")
    {
        run = true;
    }
    else
    {
        run = false;
    }
}

int main()
{
    while (run)
    {
        Calculate();
    }

    return 0;
}