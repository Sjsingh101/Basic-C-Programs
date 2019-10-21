/**Author : Vivek Bhardwaj
 **/

#include<iostream>
#include<cstring>
using namespace std;

int dsu[100];


int find1(int x){
    if(dsu[x]<0) return x;
    dsu[x]=find1(dsu[x]);
    
    return dsu[x];
}

void union1(int x,int y){
   int a= find1(x);
   int b= find1(y);
   if(a==b){return;}
   if(dsu[a]<dsu[b])
        {dsu[b]=a;}
    else if(dsu[a]==dsu[b])
        {dsu[a]--;dsu[b]=a;}
    else
        dsu[a]=b;
}

int main(){
    memset(dsu,-1,sizeof(dsu));
    union1(4,8);
    union1(5,2);
    union1(3,2);
    union1(3,4);
    union1(8,3);
    cout<<find1(4)<<" "<<find1(5)<<endl;
    for(int i=0;i<10;i++) cout<<dsu[i]<<" ";

}
