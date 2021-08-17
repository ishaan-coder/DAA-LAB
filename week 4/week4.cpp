#include<iostream>
using namespace std;
int comp=0;
int inv=0;
int mergesort(int arr[],int l,int r,int m)
{
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[i+m+1];
    }
    int i=0,j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
            {arr[k++]=a[i++];
                comp++;
            }
        else
        {
            arr[k++]=b[j++];
            comp++;
            inv+=m-i;
        }
    }
    while(i<n1)
    {
        arr[k++]=a[i++];
    }
    while(j<n2)
    {
        arr[k++]=b[j++];
    }

    }


int merges(int arr[],int l,int r)
{
    if(r>l)
    {
        int mid=l+(r-l)/2;
        merges(arr,l,mid);
        merges(arr,mid+1,r);
        mergesort(arr,l,r,mid);
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
            cin>>a[i];
        inv=merges(a,0,n-1);
        int i;
        for(i=0;i<n;i++)
            cout<<a[i]<< " ";
        cout<<endl;
        cout<<comp<<" "<<inv<<endl;
    }
}
