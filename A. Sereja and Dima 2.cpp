#include<bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin>>n;
    int a[n+1];
    queue<int>q;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
       // cin>>a[i];
        q.push(a[i]);
        //s.push(a[i]);

    }
    while(!q.empty())
    {

        cout<<q.front()<<" "<<endl;
        q.pop();

    }
    return 0;

}

    cout<<s<<" "<<d<<endl;
}



