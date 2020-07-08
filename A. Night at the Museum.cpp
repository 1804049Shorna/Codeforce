#include<bits/stdc++.h>
using namespace std;
int main()
{
 /*char c='a',b;
 b=c+1;
 cout<<b<<endl;*/
 char c='a';
 map<char,int>m;
 for(int i=0;i<26;i++)
 {
   m.insert(make_pair(c,i));
   c=c+1;
 }
 string s;
 cin>>s;
   if(s[0]!='a')
     {
     int l1=abs(m['a']-m[s[0]]);
     int l2=min(l1,26-l1);
     int l=0;
     for(int j=0;j<s.size();j++)
     {
         if(j+1==s.size())break;
         int k=abs(m[s[j]]-m[s[j+1]]);
         l=l+min(k,26-k);
     }
     cout<<l+l2<<endl;

     }
     else
     {
         int l=0;
        for(int j=0;j<s.size();j++)
     {
         if(j+1==s.size())break;
         int k=abs(m[s[j]]-m[s[j+1]]);
         l=l+min(k,26-k);
     }
     cout<<l<<endl;
     }


}

