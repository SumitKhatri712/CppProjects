#include <iostream>

using namespace std;

int main()
{
    char singleLetter = 'a';                  // For signle letter, use single quotation marks
    string multipleLetters = "AnyNameOrWord"; // For multiple letters/sentence, use double quotation marks
    int num = 354;                            // Whole numbers; No decimals
    double twoNum = 32.15;                    // Number with any decimals place
    float anyNum = 3.142648;                  // This can take decimal places upto 7 places
    bool isTure = false;                      // Yes or No kind of deal

    cout << singleLetter << multipleLetters << num << twoNum << anyNum << isTure << endl;

    return 0;
}
