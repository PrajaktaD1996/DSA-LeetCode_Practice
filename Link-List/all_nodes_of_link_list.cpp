#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr) {}
};

int main(){


  ListNode *head = new ListNode(10);
  head->next = new ListNode(20);
  head->next->next  = new ListNode(30);
  head->next->next->next = new ListNode(40);
  head->next->next->next->next = new ListNode(50);

  ListNode *current = head;
  cout<<"The Link list:";
  while(current!=nullptr){
    cout<<current->val<<"";
    current = current->next;

  }
  cout<<endl;
  return 0;

}
