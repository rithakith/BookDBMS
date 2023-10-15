#include "Book.h"

class AudioBook:public Book
{
protected:
    string voiceActor;
public:
    void printDescription();
    AudioBook(/* args */);
    ~AudioBook();
    void setVoiceActor(string voiceActor);
    string getVoiceActor();
};


