#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int z;
        cin>>z;
        int a[z];
        for(int i=0;i<z;i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
        int i,c=1;
        for(i=0;i<z;i++)
        {
            if(a[i]==x)
            {
                cout<<"key is present"<<" ";
                break;
            }
            c++;
        }
            if(i==z)
            {
                cout<<"key is not present"<<" ";
            }
            cout<<"no of comparisons="<<c<<endl;
        c=1;
    }
}
