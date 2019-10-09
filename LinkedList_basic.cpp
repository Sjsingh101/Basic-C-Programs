#include<iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node (int d){
        data=d;
        next=NULL;
    }
friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head=NULL;
    }
    void InsertAtBegin(int d){
        Node* n= new Node(d);
        n->next=head;
        head=n;
    }
    void InsertAtLast(int d){
        if (head==NULL){
            InsertAtBegin(d);
            return;
        }
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        Node* n=new Node(d);
        temp->next=n;
    }
    void InsertAtK(int d, int k){
        if (head==NULL||k==1){
            InsertAtBegin(d);
            return;
        }
        int cnt=1;
        Node* temp=head;
        while (cnt<k-1&&temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        Node* n=new Node(d);
        n->next=temp->next;
        temp->next=n;
    }
    void DeleteAtBegin()
    {
        if(head==NULL) cout<<"Empty";
        else { Node* temp=head;
               head=head->next;
               delete(temp);
                }
    }
    void DeleteAtEnd()
    { Node* temp=head;
        if(head==NULL) cout<<"Empty";
        else { while (temp->next->next!=NULL){
                                        temp=temp->next;
                                         }
              }
              temp->next=NULL;
    }
    void DeleteAtK(int d)
    {   Node* temp=head; int cnt=1;

        if(head==NULL) cout<<"Empty";
        else {
                while(cnt<d-1) {temp=temp->next; cnt++;

                                                    }
                temp->next=temp->next->next;
                delete(temp->next);

        }
    }
    int Length()
    {  int c=0;
        Node* temp=head;
        while (temp!=NULL){
            temp=temp->next;
            c++;
        }
        return c;
    }
    int check(int d,Node* temp)
    {
        if(temp==NULL) return 0;
        if(temp->data==d) return 1;
        temp=temp->next;
        check(d,temp);
    }
    void Print(){
        Node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    Node* getHead()
    {
        return head;
    }

    void rsort(Node* tmp)
    {
        Node* odd=NULL,*even=NULL,*oddtail=NULL,*eventail=NULL;
        while(tmp!=NULL)
        {
            if((tmp->data)%2!=0) { if(odd==NULL) odd=tmp;
                                  oddtail->data=tmp->data;
                                  oddtail->next=tmp->next;;
                                  //oddtail=oddtail->next;
                                }
            else                 { if(even==NULL) even=tmp;
                                  eventail->data=tmp->data;
                                  eventail->next=tmp->next;;
                                  //eventail=eventail->next;
                                 }
            tmp=tmp->next;


        }
        oddtail=even;
        eventail=NULL;
    }

};

int main(){
    LinkedList LL;
    LL.InsertAtLast(1);
    LL.InsertAtLast(2);
    LL.InsertAtLast(3);
    LL.InsertAtLast(4);
    LL.Print();

  /*  LL.InsertAtLast(5);
    LL.InsertAtK(6,3);
    LL.InsertAtK(7,10);
    LL.Print();
    LL.DeleteAtBegin();
    LL.Print();
    LL.DeleteAtEnd();
    LL.Print();
    LL.DeleteAtK(3);
    LL.Print();


    cout<<LL.Length();
    cout<<endl;
    cout<<LL.check(3,LL.getHead());
    cout<<endl;
    cout<<LL.check(99,LL.getHead());
    cout<<endl; */
    LL.rsort(LL.getHead());
    LL.Print();
}
