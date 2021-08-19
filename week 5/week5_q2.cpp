#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
            sort(a,a+n);
        int k;
        cin>>k;
        int i=0;
        int j=n-1;
        int c=0;
        while(i<j)
        {
            if(a[i]+a[j]==k)
            {
                cout<<a[i]<<a[j]<<" ";
                c++;
                i++;
                j--;
            }
                else if(a[i]+a[j]>k)
                    j--;
                else
                    i++;
        }
        if(c==0)
            cout<<"no pair present";
        cout<<endl;

    }
}
