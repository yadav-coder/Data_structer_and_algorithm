#include<iostream>
#include<unordered_map>
using namespace std;
 class Node{
    public:
      int val;
      Node* next;
      Node* random;

      Node(int v){
        val= v;
        next =NULL;
        random= NULL;
      }
 };

 class Solution{
    public:
      Node* copyRandomList(Node * head){
        if(head == NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        Node* newhead = new Node(head->val);
        Node *oldtemp = head->next;
        Node* newtemp= newhead;
        m[head]= newhead;

        while(oldtemp != NULL){
            Node* copynode = new Node(oldtemp->val);
            m[oldtemp]= copynode;
            newtemp->next = copynode;


            oldtemp =oldtemp->next;
            newtemp = newtemp->next;
        }
        oldtemp= head;
        newtemp = newhead;

        while(oldtemp != NULL){
            newtemp->random =m[oldtemp -> random];

            oldtemp =oldtemp->next;
            newtemp= newtemp->next;
        }
         return newhead;

      }
 };

 void printlist(Node* head){
    while(head != NULL){
        cout<<"value :" << head->val << "|Random :";
        if(head->random){
            cout<<head->random->val;
        }else{
            cout<< "NULL";
        }
        cout<< endl;
        head= head->next;
    }
 }

 int main(){

    Node * n1= new Node(1);
    Node * n2= new Node(2);
    Node * n3= new Node(3);

    n1->next=n2;
    n2->next=n3;
    
    n1->random = n3;
    n2->random = n1;
    n3->random = n2;

    cout<<" original List\n";
    printlist(n1);

    Solution obj;
    Node* copiedhead =obj.copyRandomList(n1);
    cout <<" copied List\n";
    printlist(copiedhead);


 return 0;
    
 }
