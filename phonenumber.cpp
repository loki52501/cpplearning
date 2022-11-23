#include<iostream>
#include<map>
#include<string>
using namespace std;

string mapping(char a)
{
  map<char,int> alpaphone {{'a',2},{'b',2},{'c',2},{'d',3},{'e',3},{'f',3},{'g',4},{'h',4},{'i',1},{'j',1},{'k',5},{'l',5},{'m',6},{'n',6},{'p',7},{'r',7},{'s',7},{'t',8},{'u',8},{'v',8},{'w',9},{'x',9},{'y',9},{'o',0},{'q',0},{'z',0}};
  return to_string(alpaphone.at(a));
}

string wordMapNumber(string word)
{
  string result="";
  for(int i=0;i<word.length();i++)
       result+=mapping(word[i]);
  return result; 
}

map<int,int> numMatchIndex(string phonenumber,string word)
{
  int index=-1;
  string wordNumber=wordMapNumber(word);
  for(int i=0;i<wordNumber.length();i++)
  {
  if(index==-1)  
  index=phonenumber.find(wordNumber[i]);
  else if (index+1 == phonenumber.find(wordNumber[i],index))
  { 
    index=phonenumber.find(wordNumber[i],index);
   // cout<<"checking "<<index;
    continue;
  }
  else
  {
    //cout<<phonenumber.find(wordNumber[i]);
    index=-1;
   break; 
  }
  }
  if(index==-1)
  {
  map<int,int> result{{-1,index}};
  return result;
  }
  else
  {
    map<int,int> result{{phonenumber.find(wordNumber[0]),index}};
    return result;
  }
}



int main()
{
  string words[]={"our","it","your","reality","real"};
  vector<pair<int,int>>;
  string phonenumber="7325189087";
for(int i=0;i<sizeof(words)/sizeof(string);i++)
{
map<int,int> re=numMatchIndex(phonenumber,words[i]);
for(map<int,int>::iterator it=re.begin();it!=re.end();it++)  
{
cout<<it->first<<" value "<<it->second;
vector.push_back(pair<int,int>(it->first,it->second))
}
}
return 0;
}
