#include<bits/stdc++.h>
using namespace std;
void bblsort(int *p,int n)
{
    int h=1,temp;
    while (h!=0)
    {
        h=0;
        for (int i=0;i<n-1;i++)
        {
            if (*(p+i)>*(p+i+1))
            {
                temp=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+1+i)=temp;
                h++;
                
            }
        }
        
    }
    
}
int main()
{
    int ar[]={2,4,5,3,1};
    int n=5;
    int *p;
    p=ar;
    bblsort(p,n);
    for (int i=0;i<n;i++)
    {
        cout<<ar[i]<<"\t";
    }
}