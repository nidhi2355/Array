#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> arr, int n){
    int sum=0, maxs=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxs=max(sum,maxs);
        if(sum<0){
            sum=0;
        }
    }
    return maxs;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    while(n>0){
        int num;
        cin>>num;
        arr.push_back(num);
        n--;
    }
    cout<<maxSubarraySum(arr,arr.size());
    return(0);
}