#include <iostream>
#include <string>

using namespace std;

struct listOfWords {
    string word;
    struct listOfWords *next;
};
listOfWords* insertElement(listOfWords* ex, string newWord)
{
    listOfWords *newElement = new listOfWords;
    newElement->word = newWord;
    newElement->next = ex;
    ex = newElement;
    return ex;
}

int main()
{
    cout << "Enter your sentence: " << endl;
    string enteredSentence;
    getline(cin, enteredSentence);
    string auxiliary = "";
    listOfWords* storage = new listOfWords;
    storage = nullptr;
    for (int i = 0; i < enteredSentence.size(); i++)
    {
        if(enteredSentence[i] != ' ')
        {
            auxiliary += enteredSentence[i];
        }
        else
        {
            storage = insertElement(storage, auxiliary);
            auxiliary = "";
        }
    }
    storage = insertElement(storage, auxiliary);
    while(storage != nullptr)
    {
        cout << storage->word << " ";
        storage = storage->next;
    }
    return 0;
}
