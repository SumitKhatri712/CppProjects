#include <iostream>

using namespace std;

int toPower(int num, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result = result * num;
    }

    return result;
}

int main()
{
    int index = 1;

    //if condition is true; Run the code
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }
    //Run the code then check if condition is true
    do
    {
        std::cout << index << std::endl;
        index++;
    } while (index <= 5);

    //while loop with all the neccasary code in parenthesis
    for (int i = 0; i < 7; i++)
    {
        std::cout << i << std::endl;
    }

    int numbers[] = {45, 3, 12, 3, 33};
    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << toPower(3, 3) << std::endl;

    return 0;
}