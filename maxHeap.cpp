# include <vector>
#include <iostream>
using namespace std;
class maxheap
{
 private:
 vector <int> pq;

 public:
 maxheap()
 {

 }

 int getsize()
 {
     return pq.size();
 }

 bool isEmpty()
 {
     return (pq.size()==0);
 }

 int getMax()
 {
     if (pq.size()==0)
     {
         return 0;
     }

     return pq[0];
 }

 void insertinpq(int element)
 {
  pq.push_back(element);

  int childindex=pq.size()-1;
  int parentindex=(childindex-1)/2;

  while (childindex>0)
  {
      if (pq[parentindex]<pq[childindex])
      {
          int temp=pq[parentindex];
          pq[parentindex]=pq[childindex];
          pq[childindex]=temp;
      }
      else
      {
          break;
      }

      childindex=parentindex;
      parentindex=(childindex-1)/2;
  }
 }

 int removeMax()
 {
     if (pq.size()==0)
     {
         return 0;
     }

     int ans=pq[0];
     pq[0]=pq[pq.size()-1];
     pq.pop_back();

     int parentindex=0;
     int leftchildindex=2*parentindex+1;
     int rightchildindex=2*parentindex+2;

     while (leftchildindex<pq.size())
     {
         int maxindex=parentindex;
         if (pq[maxindex]<pq[leftchildindex])
         {
             maxindex=leftchildindex;
         }

         if (rightchildindex<pq.size() && pq[maxindex]<pq[rightchildindex])
         {
             maxindex=rightchildindex;
         }
         if (maxindex==parentindex)
         {
             break;
         }

         int temp=pq[maxindex];
         pq[maxindex]=pq[parentindex];
         pq[parentindex]=temp;

         parentindex=maxindex;
         leftchildindex=2*parentindex+1;
         rightchildindex=2*parentindex+2;
     }

     return ans;
 }

 void print()
 {
     for (int i=0;i<pq.size();i++)
     {
         cout<<pq[i]<<" ";
     }

     cout<<endl;
 }
};

int main()
{
 maxheap h;
 h.insertinpq(40);
 h.insertinpq(20);
 h.insertinpq(30);
 h.insertinpq(10);
 h.insertinpq(15);
 h.insertinpq(100);

 h.print();

 while (!h.isEmpty())
 {
 cout<<h.removeMax()<<endl;
 h.print();
 }



}

