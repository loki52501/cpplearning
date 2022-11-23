#include<iostream>
using namespace std;
int a[10],n,x;
int main(){
        cin>>n>>x;
        for(int i=1,y;i<=n;i++){
                    cin>>y;
                            a[y]++;
                                
        }
    for(const int &n:a)
        cout<<n;
}
