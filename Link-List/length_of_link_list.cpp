#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};

int main(){
    ListNode *head = new ListNode(10);
    head->next = new ListNode(12);
    head->next->next = new ListNode(13);
    head->next->next->next = new ListNode(45);

    ListNode *ptr = head;
    int length = 0;
    while(ptr!=nullptr)
    {
        
        ptr = ptr->next;
        length++;

    }
    cout<<"length="<<length;
    cout<<endl;
    return 0;
}