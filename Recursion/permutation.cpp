#include<iostream>
#include<vector>
using namespace std;
void getPermutation(vector<int> &nums,int idx, vector<vector<int>> &ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return ;
    }
    for(int i=idx; i< nums.size();i++){
        swap(nums[idx],nums[i]);
        getPermutation(nums,idx+1,ans);
        // backtrack
         swap(nums[idx],nums[i]);


    }

}
int main (){
    vector<int> nums ={1,2,3};
    vector<vector<int>>ans;
    getPermutation(nums, 0 ,ans);
    for(auto perm : ans){
    for(auto x : perm){
        cout << x<<" ";
    }
    cout << endl <<" ";
}
    return 0;
}
