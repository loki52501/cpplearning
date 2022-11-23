nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
  int data,width;
  struct node* left, *right;
  
};



class Tree
{
   node* root;

    public:
    
   Tree(){
          root=new node;
               root->data=-1;
                    root->width=0;
                         root->left=NULL;
                              root->right=NULL;

                               
   }

    node* newNode(int s,int width)
    { 
         node *newNode=new node;
            newNode->data=s;
               newNode->width=width;
                  newNode->right=NULL;
                     newNode->left=NULL;  
                        return newNode;
                         
    }

    int addEdge(int src,int dest)
    {
          if(root->data=-1)
          {
                    root->data=src;
                            root->left=newNode(dest,1);
                                    return 1;
                                            
                                        
          }
              else
                    {int i=0;
                            if(root->data==src)
                            {
                                      root->right=newNode(dest,1);
                                              return 1;
                                                      
                            }
                            else
                            {  node* finder=root->left;
                                        for(i=0;i<2;i++)
                                        {   
                                                    
                                                      while(finder!=NULL)
                                                      {
                                                                        if(finder->data==src)
                                                                                          break;
                                                                                        else 
                                                                                                          finder=finder->left;
                                                                                                    
                                                      }
                                                                  if(finder->data==src)
                                                                                break;
                                                                              finder=root->right;
                                                                                          
                                        }
                                        if(finder!=NULL)
                                        {     
                                                          (finder->left==NULL)?finder->left=newNode(dest,2+i):finder->right=newNode(dest,2+i);
                                                                      return 1;
                                                                                  
                                        }
                                        else 
                                        return 0;
                                    }
                        }
              
    }

     int sumWidth()
     {
            node*widthSum=root->left;
                 int sum=root->width;
                      for(int i=0;i<2;i++)
                      {
                                 while(widthSum!=NULL)
                                 {
                                                sum+=widthSum->width;
                                                             widthSum=widthSum->left;
                                                                      
                                 }
                                          widthSum=widthSum->right;
                                               
                      }
                           return sum;
                            
     }

     
};

int main() {
      Tree bias;
          int testCase,src,dest;
              cin>>testCase;
                  while(testCase!=0)
                  {
                            cin>>src>>dest;
                                    bias.addEdge(src,dest);
                                        
                  }
                      cout<<bias.sumWidth();
                          return 0;
                          
}
