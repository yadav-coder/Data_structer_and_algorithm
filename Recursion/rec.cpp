#include<iostream>
using namespace std;

 void fun (int n){
    if(n==1){
        cout<< n << endl;
        return ;
    }
    cout << n <<" ";
    fun(n-1);
 }
int main(){
    fun(4);
    return 0;
}
