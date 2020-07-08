#include<bits/stdc++.h>
#define ll long long
using namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[2*n+1],flag[2*n+1];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
            flag[i]=1;
        }
        //cout<<"*"<<a[0]<<" "<<a[1];
        pair<int,int>p[2*n];
        int l=0;
        for (int i=0;i<2*n;i++)
        {
            for(int j=i+1;j<2*n;j++)
            {
                // cout<<a[i]<<" "<<a[j]<<endl;

                if(((a[i]+a[j])%2==0)&&(flag[i]&&flag[j]))
                {
                    // cout<<a[i]<<" "<<a[j]<<endl;
                   p[l].first=i+1;
                  // cout<<"*"<<p[l].first<<endl;
                   p[l].second=j+1;
               // cout<<"*"<<p[l].second<<endl;
                   flag[i]=0;
                   flag[j]=0;
                   l++;
                }
            }

        }


        for(int i=0;i<(n-1);i++)
        {

            cout<<p[i].first<<" "<<p[i].second<<endl;

        }


    }
}

