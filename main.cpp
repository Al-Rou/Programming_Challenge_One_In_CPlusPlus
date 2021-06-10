#include <iostream>
#include <string>

using namespace std;

//Declaring a LinkedList to store words
struct listOfWords {
    string word;
    struct listOfWords *next;
};
//Definition of a function to store words backwards
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
    //Prompt the user
    cout << "Enter your sentence: " << endl;
    //Take and store the input sentence
    string enteredSentence;
    getline(cin, enteredSentence);
    string auxiliary = "";
    //Definition of the LinkedList
    listOfWords* storage = new listOfWords;
    storage = nullptr;
    //Separating words and storing them into the list backwards
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
    //Printing out the whole list
    while(storage != nullptr)
    {
        cout << storage->word << " ";
        storage = storage->next;
    }
    return 0;
}
