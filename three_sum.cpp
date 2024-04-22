//if sum of three elements of array is equal to target
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    vector<int> a(n);
    for(auto &it:a){
        cin>>it;
    }
    bool found=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int current=a[i]+a[lo]+a[hi];
            if(current==target){
                found=true;
            }
            if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
