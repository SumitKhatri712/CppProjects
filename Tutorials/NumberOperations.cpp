#include <iostream>
#include <cmath> //Module to use Math functions

using namespace std;

int main()
{
    int num = 23;
    cout << -40.1564 << endl;     //Print any int/double/float
    cout << 5 + 7 << endl;        //does the mathematical operation 5+7 = 12
    cout << "5+7" << endl;        //prints the string '5+7'
    cout << 5 - 7 << endl;        //-2
    cout << 5 * 7 << endl;        //35
    cout << 5 / 7 << endl;        //returns 0 because the operation is between 2 integars
    cout << 5 / 7.0 << endl;      //returns 0.714286 because a float or double is in operation
    cout << 10 % 6 << endl;       //returns the remainder i.e.,4
    cout << 4 + 5 * 10 << endl;   //It follows BODMAS.....does 5*10 before 4+5       =>54
    cout << (4 + 5) * 10 << endl; //use paranthesis to do a operation before other   =>90
    cout << ++num << endl;        //increament number by 1, aslo --, or -=, +=, *=, /= can be used
                                  //
    cout << pow(2, 10) << endl;   //returns 10th power of 2
    cout << sqrt(216) << endl;    //returns square root of the int or float
    cout << round(5.5) << endl;   //rounds the provided number
    cout << ceil(4.1) << endl;    //rounds the number to the next whole number i.e., 5
    cout << floor(4.8) << endl;   //rounds the number to the previous whole number i.e., 4
    cout << fmin(7, 10) << endl;  //returns the lowest number from the numbers provided
    cout << fmax(7, 10) << endl;  //returns the largest number from the numbers provided
    return 0;
}