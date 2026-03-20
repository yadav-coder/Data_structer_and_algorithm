// your are given nums1 and nums2 , nums1 is subset of nums2 you have to find 
// NGE for each element of nums1 according NGE OF nums2 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1,vector<int> &nums2){// implemnt nge for nums2
    stack<int> s;
    unordered_map<int ,int >m;

    for(int i  = nums2.size()-1; i >=0; i-- ){
        while(!s.empty()  && s.top()<= nums2[i]){
            s.pop();
        }
        if(s.empty()){
            m[nums2[i]]= -1;
        }else{
            m[nums2[i]]=s.top();
        }
        s.push(nums2[i]);
    }
    vector<int> ans;
    for(int x : nums1){
        ans.push_back(m[x]);
    }
    return ans;
}

int main(){
    vector<int> arr1 ={4,1,2};
    vector<int> arr2 ={1,3,4,2};
   vector<int> ans = nextGreaterElement(arr1,arr2);
   for(int x : ans){
    cout << x <<" ";
   }

   cout<< endl;

}
