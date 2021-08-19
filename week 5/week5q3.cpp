#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int i,j;
    i=0,j=0;
    while(i<m && j<n)
    {
            if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
         else if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;


    }
}
