#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> v,int n){
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int start=v[i][0];
        int end=v[i][1];
        if(ans.empty() || ans.back()[1]<v[i][0]){
            ans.push_back(v[i]);
        }
        else{
            ans.back()[1]= max(ans.back()[1], v[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> v={{1,3},{2,6},{8,10},{10,15},{16,20}};
    vector<vector<int>> ans= mergeOverlappingIntervals(v,v.size());
    for(auto it:ans){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return(0);
}