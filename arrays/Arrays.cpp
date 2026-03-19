#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    //int arr[100];
    // cout<<"enter the element of arrays ";
    // for(int i=0;i<3;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<3;i++){
    //     cout<< arr[i] << " ";
    // }
    // cout<<sizeof(arr);

//     int arr[]={2,3,4,5,6,7,7};
//     int m =sizeof(arr)/sizeof(arr[0]);
//     cout<<"print array in reverse"<<endl;
//     for(int i=m-1;i>0;i--){
//         cout<< arr[i]<<" ";
//     }


string car[3]={"volvo","tATA","MAHINDRA"};
cout<<car[2]<<endl; 
for(string val : car){
    cout<<val<<endl;
}
   return 0;

}