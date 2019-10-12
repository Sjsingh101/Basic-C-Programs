#include <iostream>
using namespace std;

template <typename T>

class queueusingarray
{
  private:
     T * data;
     int totsize;
     int frontindex;
     int nextindex;
     int capacity;

  public:
    queueusingarray(int s)
    {
        data=new T[s];
        totsize=0;
        frontindex=-1;
        capacity=s;
        nextindex=0;

    }

    int getsize()
    {
        return totsize;
    }

    bool isEmpty()
    {
        return (totsize==0);
    }

   T front()
   {
       if (totsize==0)
       {
           cout<<"Queue is Empty";
           return 0;
       }

       return data[frontindex];
   }
    void enqueue(T d)
    {
        if (totsize==capacity)
        {
            cout<<"Queue is full"<<endl;
            return;
        }

        data[nextindex]=d;
        nextindex=((nextindex+1)%capacity);
        totsize++;

        if (frontindex==-1)
        {
            frontindex=0;
        }
    }

    T dequeue()
    {
        if (totsize==0)
        {
            cout<<"Queue is empty!"<<endl;
            return 0;
        }

        T d=data[frontindex];
        frontindex=(frontindex+1)%capacity;
        totsize--;
        return d;

        if (totsize==0)
        {
            frontindex=-1;
            nextindex=0;
        }
    }


};

int main()
{
    queueusingarray <int> q(7);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<q.getsize()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}

