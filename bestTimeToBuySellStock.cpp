#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> prices, int n){
    int mini=prices[0];
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int cost= prices[i]-mini;
        maxProfit= max(maxProfit, cost);
        mini= min(mini,prices[i]);
    }
    return maxProfit;
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
    cout<<maximumProfit(arr,arr.size());
    return(0);
}