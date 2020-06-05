#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101];
  for(int i=0;i<4;i++ )
  {
      cin>>a[i];
  }
  sort(a,a+4);
  for(int i=0;i<3;i++)
  {
     for(int j=i+1;j<3;j++)
     {
         if((a[i]+a[j])>a[3])
         {
             cout<<"TRIANGLE"<<endl;
             return 0;

         }
     }
     if(a[0]+a[1]>a[2])
     {
         cout<<"TRIANGLE"<<endl;
         return 0;
     }
  }
  for(int i=0;i<3;i++)
  {


     for(int j=i+1;j<3;j++)
     {



          if((a[i]+a[j])==a[3])
         {
             cout<<"SEGMENT"<<endl;
             return 0;

         }
     }
     if(a[0]+a[1]==a[2])
     {
         cout<<"SEGMENT"<<endl;
         return 0;
     }
  }
  cout<<"IMPOSSIBLE"<<endl;

  }

