#include<iostream>
using namespace std;
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
        }
    }
    swap(arr[i+1],arr[n]);

    return i+1;
}
int kthfind(int arr[],int n,int k)
{
    if(k>n)
        return -1;
        int l=0,r=n-1;
    while(l<=r)
    {
        int p=lpartition(arr,l,r);
        if(p==k-1)
            return p;
        else if(p>k-1)
            r=p-1;
        else
            l=p+1;
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
        int k;
        cin>>k;
        int x= kthfind(a,n,k);
        if(x==-1)
            cout<<"not found"<<endl;
        else
        {
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
            cout<<a[x]<<endl;
        }

    }
}
