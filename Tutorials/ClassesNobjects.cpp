#include <iostream>

using namespace std;

bool isNumeric(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false; //when one non numeric value is found, return false
    return true;
}

class Book
{

private:
    int pages;

public:
    string title;
    string author;
    bool multipleBooks;

    /*Constructor function
    Gets called when an object is instanced
    basically --init--() function in python*/
    Book(string argTitle, string argAuthor, int argPages, bool argMultipleBooks)
    {
        title = argTitle;
        author = argAuthor;
        setPages(argPages);
        multipleBooks = argMultipleBooks;
    }

    //A class can have multiple constructor
    Book()
    {
        title = "no title";
        author = "no author";
        setPages(0);
        multipleBooks = false;
    }

    //Object funtion
    //same as other funtion but for objects that are instanced
    string isSeries()
    {
        if (multipleBooks == true)
        {
            return "true";
        }
        return "false";
    }

    //Setter and getter function good for verifying if data provided is valid
    void setPages(int argPages)
    {
        if (isNumeric(to_string(argPages)))
        {
            pages = argPages;
        }
        else
        {
            cout << "enter an integer for pages" << endl;
        }
    }

    int getPages()
    {
        return pages;
    }
};

//Inheritance syntax  v--------------v
class PictureBook /**/ : public Book
{
public:
    bool isColourable;
    PictureBook(bool Colourable)
    {
        isColourable = Colourable;
    }
};

int main()
{
    Book HP("Harry Potter", "JK Rowling", 365, true);
    HP.title = "Hewlett Packard";
    Book LordOfTheRings;
    Book TKR("The Kite Runner", " - ", 200, false);

    cout << TKR.isSeries() << endl;
    cout << HP.author << endl;
    cout << TKR.getPages() << endl;

    PictureBook humptyDumpty(false);
    cout << humptyDumpty.isColourable << endl;

    return 0;
}