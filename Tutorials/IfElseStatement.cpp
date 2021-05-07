#include <iostream>

using namespace std;

void checkMaleAndTall()
{
    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall)
    {
        std::cout << "Male and Tall" << std::endl;
    }
    // else if (isMale || isTall)
    // {
    //     std::cout << "Either male or Tall" << std::endl;
    // }
    else if (isMale && !isTall)
    {
        std::cout << "Male and not tall" << std::endl;
    }
    else if (!isMale && isTall)
    {
        std::cout << "Not male but tall" << std::endl;
    }
    else
    {
        std::cout << "Niether male nor tall" << std::endl;
    }
}

int getMax(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    std::cout << result << std::endl;

    return result;
}

int main()
{
    checkMaleAndTall();
    getMax(3, 5, 2);
    return 0;
}