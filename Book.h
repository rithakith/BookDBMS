#include "libraries.h"

class Book
{
protected:
    string title;
    string authorName;

public:
    virtual void printDescription();
    Book(/* args */);
    ~Book();
    string getTitle();
    void setTitle(string title);
    string getauthorName();
    void setauthorName(string authorName);
};


