#include<bits/stdc++.h>
using namespace std;

void sortt(vector <int> &arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
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
    sortt(arr,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}