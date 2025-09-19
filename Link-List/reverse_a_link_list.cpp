#include<iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode * next;

    ListNode(int x):val(x),next(nullptr){}
};



 ListNode *reverse_list(ListNode *head){
    ListNode *prevptr = nullptr;
    ListNode *currptr = head;
    ListNode *nextptr = nullptr;

    while(currptr != nullptr)
    {
        nextptr = currptr->next; //saving the next node
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;


    }
    return prevptr;

 }

 void print(ListNode *head){
    ListNode *temp = head;
    while(temp != nullptr)
    {
        cout<<temp->val<<" ";
       temp = temp->next;
    }
    cout<<endl;
 }
int main(){
    ListNode *head = new ListNode(20);
    head->next = new ListNode(22);
    head->next->next = new ListNode(25);
    head->next->next->next = new ListNode(33);

    cout<<"Before reversing";
    print(head);

    cout<<"After reversing";
    ListNode *reverse_head = reverse_list(head);
    print(reverse_head);

    return 0;

}