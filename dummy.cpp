#include<iostream>
#include<unordered_map>
using namespace std;
// int main(){
//     int arr[]= { 1,2,2,3,1,4,2};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     unordered_map<int,int>freq;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//      for(auto x :  freq){
//         cout<<x.first<<"-> "<<x.second<<endl;
     
//      }


//     return 0;
// }
string onlyNumber(string s){
    string result =" ";
    for(int  i=0;i<s.length(); i++){
        if(isdigit(s[i] )){
            result+=s[i];
        }
    }
    return result;
}
 int main(){
    string s;
    cin>>s;
    cout<<onlyNumber(s)<<endl;
    return 0;
 
 }