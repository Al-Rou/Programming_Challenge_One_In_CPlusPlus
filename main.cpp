#include <iostream>
#include <string>

using namespace std;

struct listOfWords {
    string word;
    struct listOfWords *next;
};
void insertElement(listOfWords* ex, string newWord)
{

}

int main()
{
    cout << "Enter your sentence: " << endl;
    string enteredSentence;
    cin >> enteredSentence;
    string auxiliary = "";
    for (int i = 0; i < enteredSentence.size(); i++)
    {
        if(enteredSentence[i] != ' ')
        {
            auxiliary += enteredSentence[i];
        }
        else
        {

        }
    }
    return 0;
}
