#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],s[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];

    }

       sort(a,a+n);
       int c=0;
       int l=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==a[0])
            {
                c++;
                s[l]=i;
                l++;

            }
        }
        if(c>1)
        {
            cout<<"Still Rozdil"<<endl;
        }
        else
            cout<<s[0]+1<<endl;


}
