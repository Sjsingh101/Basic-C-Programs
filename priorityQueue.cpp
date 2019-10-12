# include <iostream>
# include <vector>
using namespace std;
class priorityQueue
{
    private:
    vector <int> pq;

    public:
    priorityQueue()
    {

    }

    bool isEmpty()
    {
        return (pq.size()==0);
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
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
         if (pq[parentindex]>pq[childindex])
        {
            int temp=pq[parentindex];
            pq[parentindex]=pq[parentindex];
            pq[childindex]=temp;
        }

        else
        {
            break;
        }

        childindex=parentindex;
    }
    }

    int removeMin()
    {
        if (pq.size()==0)
        {
            return -1;
        }

        int ans=pq[0];
        int temp=pq[0];
        pq[0]=pq[pq.size()-1];
        pq[pq.size()-1]=temp;
        pq.pop_back();
        int pi=0;
        int lci=(2*pi)+1;
        int rci=(2*pi)+2;
        int mini=-1;

        while (lci<pq.size() && rci<pq.size())
        {
            if (lci>pq.size())
            {
                if (pq[rci]<pq[pi])
                {
                    mini=rci;
                    int temp=pq[pi];
                    pq[pi]=pq[rci];
                    pq[rci]=temp;
                }
                else
                {
                    break;
                }
            }

            else if (rci>pq.size())
            {
                if (pq[lci]<pq[pi])
                {
                    mini=lci;
                    int temp=pq[pi];
                    pq[pi]=pq[lci];
                    pq[lci]=temp;
                }
                else
                {
                    break;
                }
            }

            else
            {

            if (pq[pi]>pq[lci] && pq[pi]>pq[rci])
            {
                if (pq[lci]<pq[rci])
                {
                    mini=lci;
                    int temp=pq[pi];
                    pq[pi]=pq[lci];
                    pq[lci]=temp;
                }
                else
                {
                    mini=rci;
                    int temp=pq[pi];
                    pq[pi]=pq[rci];
                    pq[rci]=temp;
                }
            }

            else if (pq[pi]>pq[lci] && pq[pi]<pq[rci])
            {
                 mini=lci;
                 int temp=pq[pi];
                 pq[pi]=pq[lci];
                 pq[lci]=temp;

            }

            else if (pq[pi]<pq[lci] && pq[pi]>pq[rci])
            {
                    mini=rci;
                    int temp=pq[pi];
                    pq[pi]=pq[rci];
                    pq[rci]=temp;
            }

            else
            {
                break;
            }
        }

            pi=mini;
            lci=(2*pi)+1;
            rci=(2*pi)+2;
        }

        return ans;
    }

    //Mam's logic

    int removeMinbetter()
    {
        if (pq.size()==0)
        {
            return 0;//indicsting that the heap has no element
        }

        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentindex=0;
        int leftindex=2*parentindex+1;
        int rightindex=2*parentindex+2;


        while (leftindex<pq.size())
        {
            int minindex=parentindex;

            if (pq[minindex]>pq[leftindex])
            {
                minindex=leftindex;
            }

            if (rightindex<pq.size() && pq[minindex]>pq[rightindex])
            {
                minindex=rightindex;
            }

            if (minindex==parentindex)
            {
                break;
            }

            int temp=pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;

            parentindex=minindex;
            leftindex=2*parentindex+1;
            rightindex=2*parentindex+2;
        }

        return ans;
    }

    void printvector()
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
    priorityQueue p;
    p.insertinpq(10);
    p.insertinpq(20);
    p.insertinpq(30);
    p.insertinpq(40);
    p.insertinpq(50);
    p.insertinpq(60);

    p.printvector();
    cout<<p.removeMinbetter()<<endl;
    p.printvector();
    cout<<p.removeMinbetter()<<endl;
    p.printvector();
    cout<<p.removeMinbetter()<<endl;
    p.printvector();
    cout<<p.removeMinbetter()<<endl;
    p.printvector();
    cout<<p.removeMinbetter()<<endl;
    p.printvector();
}

