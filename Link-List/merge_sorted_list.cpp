#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists recursively
Node* mergeSortedLists(Node* l1, Node* l2) {
    if (!l1) return l2; // If first list is empty, return second
    if (!l2) return l1; // If second list is empty, return first

    if (l1->data < l2->data) {
        l1->next = mergeSortedLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSortedLists(l1, l2->next);
        return l2;
    }
}

// Helper function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to insert a node at the end
void appendNode(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

int main() {
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    // Example: first sorted list
    appendNode(list1, 1);
    appendNode(list1, 3);
    appendNode(list1, 5);

    // Example: second sorted list
    appendNode(list2, 2);
    appendNode(list2, 4);
    appendNode(list2, 6);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    // Merge the lists
    Node* mergedList = mergeSortedLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
