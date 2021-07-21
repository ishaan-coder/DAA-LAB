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
        int arr[n];
        int prev;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        int i;
        int c=0;
        int step=sqrt(n);
         while (arr[min(step, n)-1] < k)
    {
        c++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            break;
    }
    if(prev>=n)
        cout<<"NOT PRESENT"<<" "<<c<<endl;
    else
    {

          while (arr[prev] < k)
        {
            prev++;
            c++;

            if (prev == min(step, n))
                {cout<<"NOT PRESENT"<<" "<<c<<endl;
                break;
                }
        }
        if(arr[prev]==k)
        cout<<"PRESENT"<<" "<<c<<endl;
            else
        cout<<"NOT PRESENT"<<" "<<c<<endl;
    }
}
}
