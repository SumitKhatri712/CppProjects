#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    //get the current directory and store in variable
    string cwd;
    system("cd");
    getline(cin, cwd);
    cout << cwd << endl;
    string folderName = cwd + "test";

    //Create a test folder to create files
    CreateDirectory(folderName.c_str(), NULL); //Create directory is part of <windows.h> header

    //Getting user input
    int noOfFiles;
    string extension;
    cout << "How many files would you like to create?: ";
    cin >> noOfFiles;
    cout << "" << endl;
    cout << "What Extension would you like?: ";
    cin >> extension;

    //Create Files in test folder
    for (int i = 0; i < noOfFiles; i++)
    {
        string fileName = "test_" + to_string(i + 1) + "." + extension;
        ofstream createFile(cwd + "test/" + fileName); //ofstream of <fstream> is used to create files
        createFile.close();
    }

    return 0;
}