#include<iostream>
using namespace std;
struct node{
  int data;
  node* child;
};
int main()
{
  node* s=new node,*p=new node,**begin,*t=new node;
  s->data=4;
  p->data=6;
  t->data=2;
  begin=&s->child;
  *begin=p; 
  begin++;
  *begin=t;
  cout<<*begin<<" p->"<<p<<" s->"<<s->child;
  if(!s->child)
    cout<<"hello";
  return 0;
}
