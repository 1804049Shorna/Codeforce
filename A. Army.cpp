#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,d,sum=0;
    cin>>n;
    int a[n-1];
    map<int,int>mp;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
   // mp.insert(make_pair(1,0));
    for(int j=1,i=0;j<n;j++,i++)
    {
      mp.insert(make_pair(j,a[i]));


    }
    cin>>c>>d;
    for(int k=c;k<d;k++)
    {
        //cout<<mp[k]<<endl;
        sum=sum+mp[k];
    }
    cout<<sum<<endl;

    //cout<<mp[c]<<" "<<mp[d]<<endl;
    //cout<<mp[c]+mp[d]<<endl;
}
