#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l,j=h;
    while (i<j)
    {   
        do
        {
            i++;
        } while (arr[i]<=pivot && i<h);
        do
        {
            j++;
        }while (arr[j]>pivot);
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
        swap(pivot,arr[j]);
    }
    return j;

}
void quick_sort(int arr[], int l,int h)
{
    
    if (l<h)
    {
        int j=partition(arr,l,h);
        quick_sort(arr,l,j);
        quick_sort(arr,j+1,h);
    }
}
int main()
{
    int arr[]={2,4,5,1,3,8};
    int n=6;
    quick_sort(arr,0,n+1);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}