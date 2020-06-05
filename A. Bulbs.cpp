#include<bits/stdc++.h>

using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  set<int>s;
  for(int i=0;i<n;i++)
  {
      int x;
     cin>>x;
     for(int j=0;j<x;j++)
     {
         int y;
         cin>>y;
         s.insert(y);
     }
  }
  int l=s.size();
  if(l==m)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
}
