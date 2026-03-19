#include<iostream>
#include<string>
using namespace std;
void getPermutation(string &str ,int idx){
    if(idx == str.length()){
        cout<< str << endl;
        return ;
    }
    for(int i=idx; i< str.length();i++){
        swap(str[idx],str[i]);
        getPermutation(str,idx+1);
        // backtrack
         swap(str[idx],str[i]);


    }

}
int main (){
    string str ="abc";
    getPermutation(str, 0 );
    
    return 0;
}
