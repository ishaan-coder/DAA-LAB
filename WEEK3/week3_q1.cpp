#include<iostream>
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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i,j;
        int comp=0,shift=0;
        int min_index;
        for(i=0;i<n-1;i++)
        {
            min_index=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min_index])
                {
                    min_index=j;

                }
                comp++;
            }
                swap(arr[min_index],arr[i]);
                shift++;

        }
        for(i=0;i<n;i++)
            cout<<arr[i]<< " ";
        cout<<endl;
        cout<<comp<<endl<<shift<<endl;
        }
}
