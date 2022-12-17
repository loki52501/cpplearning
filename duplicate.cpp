#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int indexin=0;

//its search whether an element is present or not within a given range.
bool search(string* s,string x,int size,int& n)
{
    for(int i=0;i<=size;i++)
    {
        if(s[i]==x)
        {
            indexin=i;
           // cout<<indexin<<" checkin g\n";
        return true;
    }
    }
    return false;
}


// it deletes an array of a particular element.
void delarr(string*s,int &size,string x)
{
    for(int i=0;i<size;i++)
    {
        if(s[i].compare(x)==0)
        {
        for(int j=i;j<size;j++)
        {
        s[j]=s[j+1];
        }i=i-1;
        size--;
       // cout<<"\t number:"<<size;
        }
    }
}


void print(string* s,int n)
{
  //  cout<<'\n'<<n;
for(int i=0;i<n;i++)
cout<<"\n got it "<<s[i];
}

// it deletes the duplicate elements.
int deltearr(string* s, string x,int size,int& n)
{ int ans=-1;
if(search(s,x,size,n))
{        //cout<<s[indexin]<<"\tbefore\n";
        for(int i=indexin;i<n;i++)
        s[i]=s[i+1];
        n--;
       // cout<<"\n like "<<s[indexin]<<"\t numbers:"<<n<<"\n ";
        delarr(s,n,x);
        //cout<<" after \t"<<s[indexin]<<"\n";
        ans=1;
        }
        return ans;
}  


int main() {

    int n;
    cin>>n; 
    int wantedn;
    string* s=new string[n];  
    char* ans=new char[n];
    for (int i=0;i<n;i++)
    { 
    cin>>s[i];
    }
    cin>>wantedn;
    for(int i=0;i<n;i++)
    { //cout<<n<<" this is :"<<s[i]<<" "<<i<<"\n";
        if(deltearr(s,s[i],i-1,n)==1)
        {//cout<<"final\t"<<n<<"\t";
         i=0;
        }
    }
    cout<<s[wantedn-1];
    return 0;
}