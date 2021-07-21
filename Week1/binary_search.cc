#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int arr[n];
        int i;
        for(i=0;i<n;i++)
            cin>>arr[i];
            cin>>x;
        int left=0;
        int right=n-1;
        int c=0;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==x)
            {
                cout<<"Present"<<" "<<c<<endl;
                break;
            }
            if(arr[mid]>x)
            {
                right=mid-1;
                c++;
            }
            else
            {
                left=mid+1;
                c++;
            }

        }
        if(left>right)
        {
            cout<<"Not Present"<<" "<<c<<endl;
        }
    }
}
