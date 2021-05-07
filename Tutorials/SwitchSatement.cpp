#include <iostream>

using namespace std;

string checkDayOfWeek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednasday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;

    default:
        std::cout << "No day present" << std::endl;
        break;
    }
    return dayName;
}
int main(int argc, const char **argv)
{
    std::cout << checkDayOfWeek(3) << std::endl;
    return 0;
}
