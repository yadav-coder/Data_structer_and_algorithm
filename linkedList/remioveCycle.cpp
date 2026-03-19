#include <iostream>
using namespace std;

// Node structure
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
public:
    ListNode* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Create cycle at given position (1-based index)
    void createCycle(int pos) {
        if (pos <= 0) return;

        ListNode* cycleNode = NULL;
        ListNode* temp = head;
        int count = 1;

        while (temp->next != NULL) {
            if (count == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            count++;
        }

        if (cycleNode != NULL) {
            temp->next = cycleNode;
        }
    }

    // Detect start of cycle
    ListNode* detectCycle() {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Find start
                slow = head;
                ListNode* prev=NULL;// to remove cycle
                while (slow != fast) {
                    slow = slow->next; 
                    prev= fast;// tp remove cyclewe always store the prev start of  fast pointer 
                    fast = fast->next;
                }
                prev->next=NULL;// to remove cycle
                return slow;
            }
        }
        
        return NULL;
    }
};

int main() {

    LinkedList list;

    // Creating list: 1->2->3->4->5
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    // Creating cycle at position 3 (node with value 3)
    list.createCycle(3);

    ListNode* cycleStart = list.detectCycle();

    if (cycleStart != NULL) {
        cout << "Cycle detected at node with value: "
             << cycleStart->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
