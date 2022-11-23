#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2;
        set<int> st;
        for(auto i:arr){
            st.insert(i);
        }
        for(auto i:st){
            arr2.push_back(i);
        }
        vector<int> sol;
        for(auto i:arr){
            int s = 0,e=arr2.size()-1;
            while(s<=e){
                int mid = s + (e-s)/2;
                if(arr2[mid]==i){
                    sol.push_back(mid+1);
                    break;
                }else if(arr2[mid]<i){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
            }
        }
        return sol;
}

int main()
{
    cout<<"hi";
    return 0;
}
