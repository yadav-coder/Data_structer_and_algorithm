// read your note about char string and their limitation 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool detector(string word){
  int n=word.size();

   bool allUpper =true;
   bool allLower =true;
   bool firstUpper = isupper(word[0]);
   for(int i=0; i< n; i++){
    if(!isupper(word[i])) allUpper =false;
    if(!islower(word[i])) allLower =false;
    if(i>0 && !islower(word[i])) firstUpper = false;
   }
   return allLower || allUpper || firstUpper;
}
int main(){
    // input from user
    string word;
    cout<< "enter the word:-" <<endl;
    cin>>word;
  
      cout<<detector(word)<< endl;// 0 or 1.
      cout<< boolalpha << detector(word); // print  true or false.
    
    return 0;
}