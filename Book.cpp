#include "Book.h"

void Book::printDescription()
{
        cout<<endl;

        cout << "Book Title: "<<this->title<<endl;
        cout<<"Book Author: "<<this->authorName<<endl<<endl;

}

Book::Book()
{
}

Book::~Book()
{
}

string Book::getTitle()
{
    return title;
}

void Book::setTitle(string title)
{
    this->title = title;
}

string Book::getauthorName()
{
    return authorName;
}

void Book::setauthorName(string authorName)
{
    this->authorName = authorName;
}
