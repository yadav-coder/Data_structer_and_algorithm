//find resultant  array after removing anagram 
// use sortiing approach because we want onnly comparision 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
 using namespace std;

 vector<string>removeAnagrams(vector<string>&strs){
    vector<string> ans;
     string prev ="";

     for( string word : strs){
        string sortedWord = word;
        sort(sortedWord.begin(),sortedWord.end());
        if(sortedWord != prev){
            ans.push_back(word);
            prev= sortedWord;
        }


     }
     return ans;
 }

 int main(){
     vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};

    vector<string> result = removeAnagrams(words);

    cout << "Resultant Array: ";
    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
    
 }