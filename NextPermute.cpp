#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermute(vector<int> &arr, int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1) {
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    return arr;
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
    nextGreaterPermute(arr,arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return(0);
}