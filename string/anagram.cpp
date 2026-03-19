// given to string s and t chack ther are anagram or not
#include<iostream>
#include<string>
#include<vector>
using namespace std ;

 bool anagram(string s , string t){

    // if length of s and t are not equal then its not angram
    if(s.length()!= t.length()) return false;
     vector<int > freq(26,0);

     for(char c : s){
        freq[c - 'a']++;
     }

    for(char c : t ){
        freq[c -'a']--;
    }
    for(int i=0;i<26;i++){
    if(freq[i]!=0)
      return false;
    }
    return true;
 }
int main () {
    string s, t;
    cout << "entr the string s:-"<< endl;
    cin>> s;
    cout<< " enter the string t := " << endl;
    cin >> t;
    cout<< anagram(s, t)<< endl;// output in 0 or 1
    cout<<boolalpha<<anagram(s, t);// output  true o r false

}