#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int countSetBits(int s)
{   int setbits=0,bn=0,i=0;

    while(s>0)
    {
        int rem=s%2;
        if(rem==1)
        setbits++;
        bn+=rem*pow(10,i);
        s=s/2;
        i++;


    }
    return setbits;
}

int main() {
             
          int n,sum=0;
          cin>>n;
          for (int i=1;i<=n;i++)
          {
          cout<<countSetBits(i);
          sum+=countSetBits(i);
          }
          cout<<sum; 
       
    return 0;
}