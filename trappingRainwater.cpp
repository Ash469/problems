#include <iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(auto &it:arr){
   cin>>it;
}
/* brute force approach
//right max
int Rarr[n];
for(int i=0;i<n-1;i++){
   int max=arr[i];
   for(int j=i+1;j<n;j++){
      if(arr[j]>=max){
         max=arr[j];
      }
   }
   Rarr[i]=max;
}
//left max
int Larr[n];
for(int i=1;i<n-1;i++){
   int max=arr[i];
   for(int j=0;j<i;j++){
      if(arr[j]>=max){
         max=arr[j];
      }
   }
   Larr[i]=max;
}
//min right max and left max
int minArr[n];
minArr[0]=0;
minArr[n-1]=0;
for(int i=1;i<n-1;i++){
   minArr[i]=min(Rarr[i],Larr[i]);
}
//result is max(min(min(l,r)-height),0)
int result=0;
for(int i=0;i<n;i++){
   result+=max((minArr[i]-arr[i]),0);
}
cout<<"Answer is:-"<<endl;
cout<<result<<endl;
*/
}