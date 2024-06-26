#include <iostream>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x;
    int clo=y;
    while (row>=0&& clo>=0)
    {
        if(arr[row][clo]==1){
            return false;
        }
        row--;
        clo--;
    }
    row=x;
    clo=y;
    while (row>=0&& clo<n)
    {
        if(arr[row][clo]==1){
            return false;
        }
        row--;
        clo++;
    }

    return true;
}

bool nQueen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
    if(isSafe(arr,x,col,n)){
        arr[x][col]=1;
        if(nQueen(arr,x+1,n)){
            return true;
        }
        arr[x][col]=0;//back tracing
      }
    }
    return false;
}


int main(){
int n;
cin>>n;
int** arr=new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int[n];
    for(int j=0;j<n;j++){
        arr[i][j]=0;
    }
}
if(nQueen(arr,0,n)){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}
else{
    cout<<"no solution"<<endl;
}
}