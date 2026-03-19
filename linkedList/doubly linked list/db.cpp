#include<iostream>
using namespace std;
 class Node{
    public:
    int  data;
    Node* next;
    Node* prev;

    Node( int val){
        data= val;
        prev = NULL;
        next= NULL;
    }

 };

 class DoublyList{
    Node *head;
 public :
    DoublyList(){
        head = NULL;
    }

    void push_front( int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
        }else{

        newNode->next=head;
        head->prev= newNode;
        head = newNode;
        }
    }

    void print(){
        Node * temp = head;
        while(temp != NULL){
            cout<< temp-> data << " ";
            temp = temp->next;
        }
        cout << endl ;
    }
    
 };
 int main(){
    DoublyList dl;
    dl.push_front(10);
    dl.push_front(20);
    dl.push_front(30);
    dl.push_front(40);
    dl.print();

    return 0;
 }