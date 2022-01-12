#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int key,j;
    for (int i=0;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j-=1;
        } 
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={2,4,3,1,5};
    int n=5;
    insertion_sort(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}