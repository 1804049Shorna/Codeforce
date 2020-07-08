#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n+1],flag[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        flag[i]=1;
    }
    int c=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==0&&a[i+1]==0&&flag[i+1])
        {
            // cout<<i<<" "<<i+1<<endl;
            flag[i]=0;
            flag[i+1]=0;
        }
        if(a[i]==1)
        {
            // cout<<i<<endl;
            c++;
            // cout<<"+"<<c<<endl;
        }
        else if(a[i]==0&&a[i+1]==1&&flag[i+1]&&flag[i])
        {
            // cout<<i<<" "<<i+1<<endl;
            c++;
            // cout<<"+"<<c<<endl;
        }
    }
    if(a[0]==0&&a[1]==1)
    {
        cout<<c-1<<endl;
    }
    else
    {
        cout<<c<<endl;
    }

}


