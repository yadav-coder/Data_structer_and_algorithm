// int this ,you need only traverse from left to right;
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevGreaterElement(vector<int> &arr){
stack<int> s;
vector<int> ans(arr.size()) ;
for(int i = 0; i< arr.size(); i++){
    while(s.size() > 0 && s.top()<= arr[i]){
        s.pop(); /// when you pop the two condition are raised 1- ehther stack will be empty then nge is -1
                 //or  2- if it  is not emty mean stack top will be ans;
    }
    if(s.empty()){
        ans[i] = -1;
    }else{
        ans[i]=s.top();
    }

s.push(arr[i]);
}
return ans;

}

int main(){
    vector<int> arr ={6,8,0,1,3};
   vector<int> ans = prevGreaterElement(arr);
   for(int x : ans){
    cout << x <<" ";
   }
   cout<< endl;

}