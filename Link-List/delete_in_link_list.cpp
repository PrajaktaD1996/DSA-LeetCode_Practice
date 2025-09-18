#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;

    ListNode(int x):val(x),next(nullptr){}
};


ListNode *delete_at_head(ListNode *head){
    ListNode *temp = head;
    head = head->next;
    temp->next = nullptr;
    //delete temp;
    return head;

}
ListNode *delete_at_pos(ListNode *head,int pos){
   if (head == nullptr) return nullptr;

    // Case 1: deleting head
    if (pos == 1) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Move temp to (pos-1)th node
    ListNode* temp = head;
    for (int i = 1; temp != nullptr && i < pos - 1; i++) {
        temp = temp->next;
    }

    // If pos is invalid
    if (temp == nullptr || temp->next == nullptr) return head;

    // Delete node at pos
    ListNode* del = temp->next;
    temp->next = del->next;
    delete del;

    return head;
}

ListNode *delete_at_end(ListNode *head){
    ListNode *temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp ->next = nullptr;
   return head;
}

void print(ListNode *head){
    ListNode *start = head;
    while(start != nullptr)
    {
        cout<<start->val<<" ";
        start = start->next;
    }

    cout<<"NULL"<<endl;
}
int main(){
    ListNode *head = new ListNode(20);
    head->next = new ListNode(25);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(35);

    print(head);

    head = delete_at_head(head);
    print(head);

    head = delete_at_pos(head,2);
    print(head);

    head = delete_at_end(head);
    print(head);

    return 0;

}
