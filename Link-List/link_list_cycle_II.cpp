#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL) {}

};

class Solutions{
    public:
    ListNode *detect(ListNode *head)
    {
       if(!head || !head->next)
       return nullptr;
    
    ListNode *slow = head;
    ListNode *fast = head;
    //bool cycle = false;

    while(fast && fast->next){
    
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        break;
    }

    if(fast == NULL || fast->next == NULL)
    return nullptr;

    ListNode *ptr1 = head;
    ListNode *ptr2 = slow;
    while(ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;


    }

    return ptr1;

}
};

void printval(ListNode *head, Solutions& sol){
    ListNode *startNode = sol.detect(head);
    if(startNode)
    cout<<"Cycle starts at node val:"<<startNode->val<<endl;

}

int main(){
    ListNode *head = new ListNode(3);
    ListNode *one = new ListNode(2);
    ListNode *two = new ListNode(4);
    ListNode *three = new ListNode(7);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = two;
   
    Solutions sol;
    printval(head,sol);

    return 0;

}