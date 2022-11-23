#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
 int tc,sizeofchar;
 cin>>tc;
 while(tc>0)
 {
 string sim;
 int q=0;
 cin>>sizeofchar;    
 cin>>sim;
 for(int i=0;i<sizeofchar;i++)
 {   if(sim[i]=='Q') 
     q++;
     else if(q>0)
     q--;

 }
if(q==0)
     cout<<"Yes\n";
else
     cout<<"No\n";
tc--;
 }
 return 0;
}
