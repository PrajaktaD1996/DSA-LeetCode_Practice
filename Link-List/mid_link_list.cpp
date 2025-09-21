#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};

ListNode *Find_mid(ListNode *head){
   // ListNode *Find_mid(ListNode *head, bool=> if even number of ele boolval)
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    //ListNode *fast = boolval?head: head->next


    if(head == nullptr)
    return nullptr;

    int cnt = 0;

    /*inefficient approch*/
    // while(temp1 != nullptr){
    //      cnt++;
    //      temp1 = temp1->next;
    // }

    // for(int i=0;i<cnt/2;i++)
    // {
    //     temp2 = temp2->next;
    // }
    // return temp2;

    while(temp2 != nullptr && temp2->next != nullptr){
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }

    return temp1;
}

void print(ListNode *head){
    ListNode *curr = head;
    while( curr != nullptr)
    {
        cout<<curr->val<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){
    ListNode *head = new ListNode(23);
    head->next = new ListNode(24);
    head->next->next = new ListNode(27);
    head->next->next->next = new ListNode(28);
    //head->next->next->next->next = new ListNode(30);

    cout<<"the original: ";
    print(head);

    cout<<"mid of given link-list:";
    ListNode *value = Find_mid(head);
    cout<<value->val;
    
    return 0;

}