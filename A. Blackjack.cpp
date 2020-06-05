#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,left;
    cin>>n;
    left=n-10;
    if(left==0)
    {
      cout<<"0"<<endl;
    }
    else if(left==1||left==11)
    {
        cout<<"4"<<endl;
    }
    else if(left==2||left==3||left==4||left==5||left==6||left==7||left==8||left==9)
    {
        cout<<"4"<<endl;
    }
    else if(left==10)
    {
        cout<<"15"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }



}
