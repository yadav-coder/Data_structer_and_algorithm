#include<list>
#include<iostream>
using namespace std;
void reverse(int * head){

}
 int main(){
    list<int > arr;
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    for(int x : arr){
        cout<< x << " ";
    }
    cout << endl ;
    arr.reverse();

     for(int x : arr){
        cout<< x << " ";
    }
}
//     reverse(&arr);//You cannot directly use 3 pointers on STL list like a raw linked list because:

// //Internal structure is hidden

// //You don’t control next / prev pointers

// //👉 So we simulate or implement our own linked list
//     return 0;
//  }