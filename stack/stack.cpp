#include<iostream>
#include<vector>
using namespace std;
class Stack{
    vector<int> v;

public:

    void push(int val){//O(1)
        v.push_back(val);
    }

    void pop(){//O(1)
        v.pop_back();
    }

    int  top(){//O(1)
        return v[v.size()-1]; 
    }

    bool empty(){
        return v.size()== 0;
    }

    void print(){
        for( int x :v){
            cout << x << " ";
        }
        cout<< endl;
    }

};
int main(){
    Stack  s;
    s.push(5);
    s.push(3);
    s.push(6);
    s.push(7);
    s.print();
    cout<<s.top() << endl; ;

    s.pop();
    s.pop();
    s.print();
    cout<<s.top() ;
    cout<< endl;

    // another way to pritnt without print function
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    cout<< endl;


    return  0;
    
}