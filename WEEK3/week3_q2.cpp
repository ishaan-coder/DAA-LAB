#include<iostream>
using  namespace std;
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
    int i,j;
    int key;
    int shifts=0,comp=0;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            shifts++;
            comp++;

            j--;
        }
        a[j+1]=key;
        shifts++;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<comp<<endl<<shifts<<endl;
        }
}
