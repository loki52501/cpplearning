#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
  int tc=0;
  cin>>tc;
  while(tc)
  {
  long long int nm,ans=0,max=0;
  vector<long long int> health,spell;
  cin>>nm;
  for(int i=0,input;i<nm;++i)
  {
    cin>>input;  
    health.push_back(input);
    ans+=input;
  }
  for(int i=0,input;i<nm;++i)
  {
    cin>>input;
    spell.push_back(input);
    ans+=input;
    if(max<input)
      max=input;
  }
cout<<ans-max<<"\n";
tc--;
  }
}
