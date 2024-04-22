//rectangle with maximum area in a histogram
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);

int area;
for(int i=0;i<n;i++){
     int x=arr[i]*(n-i);
     if(x>area){
        area=x;
     }
}
cout<<area<<endl;
}