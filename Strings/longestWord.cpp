#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

string longestFinder(const string & sentence)
{
    istringstream iss(sentence);
    string word, longestWord;

    while(iss >> word)
    {
        if(word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }
    return longestWord;
}

int main()
{
   string input;
   getline(cin,input) ;
   string longestWord = longestFinder(input);
   if(!longestWord.empty())
   {
        cout << "Longest Word in string is "<< longestWord;
   }
   else
   {
        cout << "No longest Word was found ";
   }
   return 0;
}