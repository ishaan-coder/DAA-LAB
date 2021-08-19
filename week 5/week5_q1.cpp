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
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int temp[26]={0};
        int i;
        for(i=0;i<n;i++)
        {
            temp[a[i]-'a']++;
        }
        int max1=1;
        int x;
        for(i=0;i<26;i++)
        {
            if(max1<temp[i])
            {
                max1=temp[i];
                x=i;
            }
        }
        char y=char(x+97);
        if(max1<=1)
            cout<<"no duplicates present"<<endl;

        else
        {
            cout<<y<<"-"<<max1;
            cout<<endl;
        }
    }
}
