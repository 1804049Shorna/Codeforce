#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,li,j;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    li=a[0];
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<li)
        {
          c++;
        }

    }
    if(c==n-1)
    {
        cout<<"0"<<endl;
    }
    else
    {

        queue<int >q;
       // set<int>s;
        int k=0;
       for(int i=1,j=0;i<n;i++,j++)
       {
           b[j]=a[i];
           k++;



       }
       sort(b,b+k);
       for(int i=k-1;i>=0;i--)
       {
             q.push(b[i]);
       }
       int ans=0;

       while(!q.empty())
       {
           int x=q.front();
          // s.insert(x);
           //cout<<"*"<<x<<endl;

           if(x>=li)
           {
          //  cout<<"dukeci"<<endl;
             ans++;
             li++;
             // cout<<"Li:"<<li<<endl;
             // cout<<"ans:"<<ans<<endl;
             int y=x-1;
             q.push(y);
             q.pop();
           }
           else
           {
               q.pop();
           }
       }
       cout<<ans<<endl;


    }

}
