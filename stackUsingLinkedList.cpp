#include <iostream>
using namespace std;

template <typename T>
class Node
{


 public:
     T data;
     Node * next;

    Node(T data)
    {
        this->data=data;
        this->next=NULL;
    }
};

template <typename T>
class Stack
{
 private:
 Node <T> * head;
 int totsize;

 public:

 Stack()
 {
     head=NULL;
     totsize=0;
 }
 void push(T data)
 {

     Node <T> * newnode=new Node <T> (data);

     newnode->next=head;
     head=newnode;
     totsize++;
 }

 int totalsize()
 {
     return totsize;
 }

 bool isEmpty()
 {

     if (totsize==0)
     {
         return true;
     }
     return false;
 }

 T pop()
 {

     if (totsize==0)
     {
         cout<<"Stack is empty"<<endl;
         return 0;
     }
     Node <T> * temp=head;
     T data=temp->data;
     head=temp->next;
     delete temp;
     totsize--;
     return data;
 }

 T top()
 {
     if (totsize==0)
     {
         return 0;
     }
     return head->data;
 }

};
int main()
{
    Stack <int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout<<s1.totalsize()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    return 0;
}

