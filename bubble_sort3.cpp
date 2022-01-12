#include<bits/stdc++.h>
using namespace std;
void bbl_sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={2,3,4,1,5};
    int n=5;
    bbl_sort(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
