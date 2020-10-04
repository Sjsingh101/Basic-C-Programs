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
    //minheap h(11);
    /*h.insert(4);
    h.insert(2);
    h.insert(3);
    h.insert(0);
    cout << h.G_min();
    cout <<h.Extmin();
    cout <<h.Extmin();
    int n;
    //int m;
    int n1;
    //int m1;
    minheap h(n);
    cin >> n;
    //cin >> m;
    for (int i=0; i<n;)
    {

        cin >> n1;
        h.insert(n1);
        i++;
    }
    /*for (int j=0; j<m;)
    {
        cin >> m1;
        h.insert(m1);
        j++;
    }
    for (int k=n; k>0;)
    {


        cout << h.Extmin();
        k--;
    }*/
    int o=0;
    int k;
    int n;
    int n1;
    cin >> k;
    cin >> n;
    minheap h(n);
    for (int j=0;j<n;){
        cin >> n1;
        //cout << n1;
        h.insert(-n1);
        j++;
    }
    //cout << h.extractMin() << " "; //e
    // cout << h.getMin() << " "; //a
    //cout << h.decreaseKey(2, 1);
     //c
    //h.insertKey(l);

    /*for (int l=n; l>0;)
    {
        cout << h.extractMin(); //printing priority queue
        l--;

     }*/
        //l--;

   /* int a[n];
    for (int k=0; k<n;)
    {
        a[k] = h.extractMin();
        k++;
    }
    for (int y=0; y<n;)
    {
        cout << a[y]<< endl;
        y++;
    }
    */
    for (int m=0; m<k;)
    {

        //int c;
        int b = h.Extmin();
        o = o + b;
        //cout << b << endl;
        h.insert(b/2);
        m++;

    }

    cout << -o;
}
