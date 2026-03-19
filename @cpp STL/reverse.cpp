#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data= val;
        next=NULL;
    }
       
};
class List{
  Node  *head;
    public:
     List(){
        head=NULL;
     } 
     
     void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next =head;
        head =newNode;
     }

     void print(){
        Node * temp =head;
        while(temp != NULL){
            cout<< temp->data << " ";
            temp= temp->next;
        }
     }

     void reverse(){
        Node *curr = head;
        Node* prev= NULL;
        Node* next =NULL;
        while(curr != NULL){
            next= curr->next;
            curr->next= prev;
            prev =curr;
            curr=next;
        }
        head =prev;
     }
   

     Node* reverseInRange(int left ,int right){
        if(head == NULL || left == right) return head;
        Node* dummy= new  Node(0);
        dummy->next=head;

        Node* prev = dummy;

        // shift prev before left 
        for(int i=0;i<left ;i++){
            prev=prev->next;
        }
        Node* curr = prev->next;

        // reversr linked list from left to right
        for(int i =0 ; i< (right -left); i++){
            Node* temp  =curr->next;
            curr->next=temp->next;
            temp->next = prev->next;
            prev->next= temp;

        }

        return dummy->next;
     }
};

int main(){
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);
    ll.push_front(50);
    ll.push_front(60);
    ll.push_front(70);

    ll.print();
    cout<< endl;

    ll.reverse();
    ll.print();
    cout<< endl;

    ll.reverseInRange(2,5);
    ll.print();

    return 0;
}
