#include<iostream>
#include<climits>
using namespace std;
class minheap{
	int *ptr;
	int sizeH;
	int maxH;
public:
	minheap(int high){
		//intitilize heap
        sizeH=0;
		maxH=high;
		ptr=new int[high];
	}
	int parent(int k){
		return (k-1)/2;
	}
	int lchild(int k){
		return 2*k+1;
	}
	int rchild(int k){
		return 2*k+2;
	}
	int G_min(){
		return ptr[0];
	}
	void heapify(int k){
		int x = rchild(k);
		int y =lchild(k);
		int minimum=k;
		if(x<sizeH && ptr[k]>ptr[x])
			minimum = x;
		if(y<sizeH && ptr[k]>ptr[y])
			minimum = y;
		if(minimum!=k)
			swap(&ptr[k], &ptr[minimum]);
	}
	void insert(int k){
		if(sizeH>=maxH)
			cout << "overloaded";
		sizeH++;
		int j =sizeH-1;
		ptr[j]=k;
		while (j != 0 && ptr[parent(j)] > ptr[j])
    	{
       		swap(&ptr[j], &ptr[parent(j)]);
       		j = parent(j);
    	}

	}
    //minheap(int maxH);
    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int Extmin(){ //printing extactmin value

        if (sizeH==1)
        {
            sizeH--;
            return ptr[0];
        }
        int leftC=G_min();
        if (sizeH <= 0)
            return INT_MAX;

        int t=ptr[0];
        ptr[0]=ptr[sizeH-1];
        sizeH--;
        heapify(0);
        return t;
    }
       // return r;


};
int main()
{
    int n;
    int n1;
    minheap h(n);
    cin >> n;
    for(int i=0; i<n;){
        cin >> n1;
        h.insert(n1);
        i++;
    }
    for(int j=n; j>0;){
        cout << h.Extmin();
        j--;
    }
}
