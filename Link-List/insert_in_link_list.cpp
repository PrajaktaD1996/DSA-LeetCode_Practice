#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};

//insert at start
ListNode *insert_at_head(ListNode *head,int val){
    ListNode *newNode = new ListNode(val); //new node is generated 
    newNode->next = head;
    return newNode;
}

//insert at end
ListNode *insert_at_end(ListNode *head,int val){
    ListNode *newNode = new ListNode(val);
    ListNode *ptr = head;
    while(ptr->next != NULL)
    ptr = ptr->next;

    ptr->next = newNode;
    return head;
    
}

//insert in middle
ListNode *insert_in_pos(ListNode *head,int val,int pos){
  ListNode *newnode = new ListNode(val);
  ListNode *ptr = head;
  while(pos)
  {ptr = ptr->next;
   pos--;
  }

  newnode->next = ptr->next;
  ptr->next = newnode;
   
  return head;
}

void print(ListNode *head)
{
    ListNode *temp = head ;
    while(temp !=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
}

int main(){
    ListNode *head = new ListNode(10);

    //initial link-list
    head->next = new ListNode(20);
    head->next->next = new ListNode(25);
    head->next->next->next = new ListNode(28);

    //print initial link-list
    cout<<"Initial:";
    print(head);

    //after inserting at front
    head = insert_at_head(head,1);
    cout<<"After inserting at head: ";
    print(head);


    //after inserting at mid
    head = insert_in_pos(head,5,2);
    cout<<"After inserting in pos: ";
    print(head);


    //after inserting at end
    head = insert_at_end(head,9);
    cout<<"After inserting at end: ";
    print(head);

    return 0;



}