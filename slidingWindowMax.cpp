#include<iostream> 
#include<deque>
#include<vector>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   vector<int> arr(n);
   for(auto &it:arr){
    cin>>it;
   }

   deque<int> q;
   vector<int> ans;
   for(int i=0;i<k;i++){
    while(!q.empty() and arr[q.back()]<arr[i]){
        q.pop_back();
    }
    q.push_back(i);
   }
   ans.push_back(arr[q.front()]);
   for(int i=k;i<sizeof(arr)/sizeof(arr[0]);i++){
      if(q.front()==i-k){
        q.pop_front();
      }
      while(!q.empty() and arr[q.back()]<arr[i]){
        q.pop_back();
      }
      q.push_back(i);
       ans.push_back(arr[q.front()]);
   }
  
   for (auto it: ans){
    cout<<it<<" ";
   }
    return 0;

}