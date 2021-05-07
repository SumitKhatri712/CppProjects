#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {45, 3, 12, 3, 33};                             //Basic syntax
    int moreNumbers[12] = {31, 566, 42, 3, 45};                     //array with predefined definate size
    int noNumbers[4];                                               //just defined array without any data/values
                                                                    //
    numbers[1] = 13;                                                //change a value at specific index
    moreNumbers[5] = 43;                                            //add a value at specifc index
    noNumbers[0] = 24;                                              //define a value at later time
                                                                    //
    cout << "first element of numbers[] is " << numbers[0] << endl; //print value of any index of array
    return 0;
}