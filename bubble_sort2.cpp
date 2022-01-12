#include<bits/stdc++.h>
using namespace std;
void bubblsort(int a[],int n)
{
    int h=1,temp;
    while (h!=0)
    {
        h=0;
        for (int i=0;i<n;i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                h++;
            }
        }
    }
}
int main()
{
    int n=5;
    int arr[]={2,4,1,3,5};
    bubblsort(arr,5);
    for (int j=0;j<n;j++)
    {
       cout<<arr[j]<<"\t"; 
    }
}
