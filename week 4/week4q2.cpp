#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int comp=0;
int shifts=0;
int lpartition(int arr[],int l,int n)
{
    int pivot=arr[n];
    int i=l-1;
    for(int j=l;j<=n-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
            comp++;
            shifts++;
        }
    }
    swap(arr[i+1],arr[n]);
    shifts++;
    return i+1;
}
void qsort(int arr[],int l,int n)
{
    if(l<n)
    {
        int p=lpartition(arr,l,n);
        qsort(arr,l,p-1);
        qsort(arr,p+1,n);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        qsort(a,0,n-1);
        int i;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<< " ";
        }
        cout<<endl;
        cout<<comp<<" "<<shifts<<endl;
    }
}
