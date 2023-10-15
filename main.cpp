#include "BookShop.h"

#define sizeOfArray 2
int main()
{
    BookShop *bookCollection = static_cast<BookShop *>(malloc(sizeOfArray * sizeof(BookShop)));
    int arrSize = sizeOfArray;
    int audioBookCount = 0;
    int bookCount = 0;
    for (int i = 0; i < arrSize; i++)
    {
        string response;
        cout << endl
             << "Is it an Audio Book? : ";
        cin >> response;
        cin.ignore();
        cout << endl;
        if (response == "y")
        {
            new (&bookCollection[i]) AudioBook();

            string title, author, voiceActor;
            audioBookCount += 1;
            cout << "Enter the Audio Book title: ";
            cin >> title;
            cin.ignore();
            cout << "Enter the Audio Book author: ";
            cin >> author;
            cout << "Enter the Audio Book Voice Actor: ";
            cin >> voiceActor;

            cin.ignore();
            AudioBook ab;
            bookCollection[i].setTitle(title);
            bookCollection[i].setauthorName(author);
            bookCollection[i].setVoiceActor(voiceActor);
        }
        else
        {
            new (&bookCollection[i]) Book();

            string title, author;
            bookCount += 1;
            cout << "Enter the Book title: ";
            cin >> title;
            cin.ignore();
            cout << "Enter the Book author: ";
            cin >> author;

            cin.ignore();
            bookCollection[i].setTitle(title);
            bookCollection[i].setauthorName(author);
        }

        if (i == arrSize - 1)
        {
            string changeSize;
            cout << endl
                 << "Do you want to double the size of your book Collection?(y/n): ";
            cin >> changeSize;
            cin.ignore();

            if (changeSize == "y")
            {
                arrSize *= 2;
                bookCollection = static_cast<BookShop *>(realloc(bookCollection, arrSize * sizeof(BookShop)));
            }
        }
    }
    cout << "----------------------------------------------------------------" << endl;
    cout << endl
         << "Total number of Books in the collection: " << bookCount << endl;
    cout << "Total number of Audio Books in the collection: " << audioBookCount << endl;

    for (int j = 0; j < arrSize; j++)
    {
        cout << endl
             << j + 1 << endl;
        bookCollection[j].printDescription();
    }
    cout << "----------------------------------------------------------------" << endl;

    free(bookCollection);
}