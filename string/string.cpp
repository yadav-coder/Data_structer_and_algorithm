// read your note about char string and their limitation 

#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;
 int main(){
string str = "apna college"; // this is dynamic in nature => runtime resize.
cout<< str<<endl;
// reverse  string 
reverse(str.begin(), str.end());
cout<< str<< endl;
return 0; 
}
