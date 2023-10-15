#include "AudioBook.h"

void AudioBook::printDescription()
{       
        cout<<endl;

        cout << "AudioBook Title: "<<this->title<<endl;
        cout<<"AudioBook Author: "<<this->authorName<<endl;
        cout<<"AudioBook Voice Actor: "<<this->voiceActor<<endl<<endl;

}

AudioBook::AudioBook()
{
}

AudioBook::~AudioBook()
{
}

void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor=voiceActor;
}

string AudioBook::getVoiceActor()
{
    return voiceActor;
}
