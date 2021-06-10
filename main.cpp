#include <iostream>
#include <string>

using namespace std;

struct listOfWords {
    string word;
    struct listOfWords *next;
};
void insertElement(listOfWords* ex, string newWord)
{
    listOfWords *newElement = new listOfWords;
    newElement->word = newWord;
    newElement->next = nullptr;
    if(ex == nullptr)
    {
        ex = newElement;
        return;
    }
    else
    {
        newElement->next = ex;
        ex = newElement;
        return;
    }
}

int main()
{
    cout << "Enter your sentence: " << endl;
    string enteredSentence;
    cin >> enteredSentence;
    string auxiliary = "";
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
    storage->word = "Hi";
    storage->next = nullptr;
    while(storage->next != nullptr)
    {
        cout << storage->word << " ";
        storage = storage->next;
    }
    return 0;
}
