/*To use unordered_map we must include <unordered_map> header file in C++.

#include <unordered_map>

Syntax to Declare a HashMap
unordered_map<key, value> hashMap;

The average time complexity for search, insertion and deletion of a std::unordered_map is O(1), that is why it is very efficient.*/
#include<iostream>
#include <unordered_map>
using namespace std;
 int main(){
    unordered_map<string,int>mp;
    mp["apple"]=10;
    mp["banana"]=20;
    mp["mango"]=30;

    // for (auto it : mp){
        // cout<< it.first << " " << it.second<< endl;
//     }
 cout << mp["banana"]<<endl;
    return 0;
 }