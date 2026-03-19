#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

         Node(int val){
            data =val;
            next =NULL;
         }
};

class List{
    Node* head ;
    Node* tail;

    public:
      List(){
        head= tail= NULL;
      }


      void Push_Front(int val){
        Node* newnode = new Node(val); 

        if(head== NULL){// when no element in linked list
            head= tail= newnode;
            return;
        }else {
            newnode->next= head;
            head =newnode;
        }
    }

    void push_back(int val){
        Node* newnode =new Node(val);

        if(head == NULL){
            head =tail = newnode;
        }else {
            tail->next= newnode;
            tail= newnode;
        }
    }

 void pop_front(){
    if( head == NULL){
        cout<< " ll is empty "<<endl;
        return ;
    }else {
        Node *temp =head;
        head =head->next;
        temp->next =NULL;
        delete temp;
    }
 }

 void pop_back(){
    if(head == NULL){
        cout<< " ll is empty" <<endl;
        return ;
    }else {
        Node *temp=head ;
        while(temp->next != tail){
            temp=temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail =temp;

    }
 }

 void insert_middle(int val , int pos ){
    if(pos  < 0){
        cout<< " invalid pos" <<endl ;
        return;
    }
    if(pos==0){
        Push_Front(val);
    }
    Node* temp = head;
    for(int i=0 ; i<pos-1 ;i++){
        if(temp == NULL){// in the case ,pos is greater than linkedlist then my templ always find null ;
            cout<<" invlaid pos " <<endl;
            return;
        }
        temp =temp->next ;
    }
    Node * newnode =new Node(val);
    newnode->next =temp->next;
    temp->next =newnode;

 }

int search(int key){
    Node * temp =head;
    int idx=0;
    while (temp!= NULL){ 
        if(temp->data ==key){
            return idx;
        }
        temp=temp->next;
        idx ++;
    }
    return -1; 
}

    void  printLL(){
        Node*  temp =head;
        while(temp != NULL){
            cout<< temp->data << "->";
            temp =temp->next;
        }
        cout << "NULL " << endl;
    }

};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.insert_middle(4,1);
    cout <<ll.search(2)<<endl;
    
    ll.printLL();
return 0;
}