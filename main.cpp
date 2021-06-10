#include <iostream>
#include <string>

using namespace std;

struct listOfWords {
    string word;
    struct listOfWords *next;
};
listOfWords* insertElement(listOfWords* ex, string newWord)
{
    /*listOfWords* aux = new listOfWords;
    aux = ex;*/
    listOfWords *newElement = new listOfWords;
    newElement->word = newWord;
    newElement->next = ex;
    ex = newElement;
    return ex;
    /*if(ex == nullptr)
    {
        ex = newElement;
        cout << "YES";
        return;
    }
    else
    {
        newElement->next = ex;
        ex = newElement;
        return;
    }*/
}

int main()
{
    cout << "Enter your sentence: " << endl;
    string enteredSentence;
    cin >> enteredSentence;
    string auxiliary = "Hi";
    listOfWords* storage = new listOfWords;
    storage = nullptr;
    /*for (int i = 0; i < enteredSentence.size(); i++)
    {
        if(enteredSentence[i] != ' ')
        {
            auxiliary += enteredSentence[i];
        }
        else
        {
            insertElement(storage, auxiliary);
            auxiliary = "";
        }
    }
    insertElement(storage, auxiliary);*/
    storage = insertElement(storage, auxiliary);
    storage = insertElement(storage, "Al ");
    /*listOfWords* neu = new listOfWords;
    neu->word = auxiliary;
    neu->next = nullptr;
    listOfWords* neuTwo = new listOfWords;
    neuTwo->word = " Al";
    neuTwo->next = nullptr;
    neuTwo->next = neu;
    storage = neuTwo;*/
    if (storage != nullptr)
    {
        cout << "YES" << endl;
    }
    //cout << auxiliary;
    cout << storage->word;
    storage = storage->next;
    cout << storage->word;
    /*while(storage != nullptr)
    {
        cout << storage->word << " ";
        storage = storage->next;
    }*/
    return 0;
}
