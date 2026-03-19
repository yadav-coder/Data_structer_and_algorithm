/*vectors :- for operation that require adding and removing array element ,
 c++ provides vectors which are resizablearrays: ;The size of vector is dynamic ,meaning it can shrinkand grow as needed;
 it found in  ---<vector>--- library,they come with very usefull function to add ,remove and modify elements;
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>val;//if you want guve size then "val(size in num)"use 
//add elemnet
val.push_back(2);
val.push_back(3);
val.push_back(4);
val.push_back(5);
cout<< "value inserted in arr"<<endl;
for(int i : val){
    cout<<i<< " "<<endl;
}
// pop element
val.pop_back();// its return type is void 
cout<<"it's deleted the last element"<<endl;
for(int i : val){
    cout<<i<<endl;
}
return 0;
}