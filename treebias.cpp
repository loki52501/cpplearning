#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;



struct node {
  int data;
  int width;
  node * left;
  node * right;
};

class Tree {
  int noOfElements;
  node * root;

  public:

    Tree() {
      noOfElements=0;
      root = NULL;

    }

  node * newNode(int s, int width) {
    node * newNode = new node;
    newNode -> data = s;
    newNode -> width = width;
    newNode -> right = NULL;
    newNode -> left = NULL;

    noOfElements++;
    return newNode;
  }

void addEdge(int src, int dest) {
    if (root == NULL) {
  
      root = newNode( src,0);

      root -> left = newNode(dest, 1);


    } else {
   
      int j=-1;
      node**stack=new node*[noOfElements];
    
      if (root -> data == src) {
    
        root -> right = newNode(dest, 1);
       
      } else {
        node * finder = root -> left;

        //cout<<root->right->data;
     
          while (finder != NULL) {
            if (finder -> data == src)
            {
            
                if(finder->left==NULL)
                finder->left=newNode(dest,finder->width+1);
                else if(finder->right==NULL)
                finder->right=newNode(dest,finder->width+1);
              break;}
            else
            { 
              if(finder->left!=NULL)
            {
               if(finder->right!=NULL) 
            stack[++j]=finder->right;
              finder = finder -> left;
            }
            else if(j>=0)
            {
            finder=stack[j--];
            }
            else
            {
              finder=root->right;
             }            }
          }
     
        }
      }
    }
  

  int sumWidth()  {
    node*elem=root;
    int rights=-1;
    node**stack=new node*[noOfElements];
    int sum=0;
      while(elem!=NULL )
    { 
      sum+=elem->width;
      if(elem->right!=NULL)
      {
        //cout<<rights<<" h"<<elem->right;
      stack[++rights]=elem->right;
      }
      elem=elem->left;
      if(elem==NULL )
      if(rights!=-1)
      elem=stack[rights--];
     
    }
    return sum;
  }

  int find(int n)
  {
     int result=-1;
    node*elem=root;
    int rights=-1;
    node**stack=new node*[noOfElements];
      while(elem!=NULL )
    { 
      if(elem->data==n)
      { result=1;
      return result;
      }if(elem->right!=NULL)
      {
        //cout<<rights<<" h"<<elem->right;
      stack[++rights]=elem->right;
      }
      elem=elem->left;
      if(elem==NULL )
      if(rights!=-1)
      elem=stack[rights--];
     
    }
  return result;
    
  
  }

  void print()
  {
    node*elem=root;
    int rights=-1;
    node**stack=new node*[noOfElements];
      while(elem!=NULL )
    { 
      cout<<elem->data<<"\n";
      if(elem->right!=NULL)
      {
        //cout<<rights<<" h"<<elem->right;
      stack[++rights]=elem->right;
      }
      elem=elem->left;
      if(elem==NULL )
      if(rights!=-1)
      elem=stack[rights--];
     
    }
  
    
  }
};

int main() 
{
  Tree bias;
  int n,j=0, src, dest;
  
  cin >> n;

  while (n >= 0) {
    cin >> src >> dest;
    //cout<<"hi "<<src<<" dest"<<dest;
    bias.addEdge(src, dest);
    if(j==0)
    { n-=2;
    j++;
    }
   n--; 
  }

  cout<<"\n"<<bias.sumWidth();
  return 0;
}