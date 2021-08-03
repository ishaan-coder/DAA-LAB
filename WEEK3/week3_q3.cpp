#include<iostream>
using namespace std;
void Merge(int arr[],int n,int l,int r,int m)
{
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    int i,j;
    for(i=0;i<n1;i++)
        a[i]=arr[l+i];
    for(j=0;j<n2;j++)
    {
        b[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
            arr[k++]=b[j++];
    }
    while(i<n1)
        arr[k++]=a[i++];
    while(j<n2)
        arr[k++]=b[j++];
}
void mergeSort(int arr[],int n,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,n,l,m);
        mergeSort(arr,n,m+1,r);
        Merge(arr,n,l,r,m);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        mergeSort(a,n,0,n-1);
        int i;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
                {
                    c=1;
                    break;
                }
        }
        if(c==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
