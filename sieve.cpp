//PRIME NUMBER PRE COMPUTATION
#include<bits./stdc++.h>
using namespace std;
const int N=1000;
int main(){
    vector<bool> prime(N,1);
    vector<int> highest_prime(N,1);
     vector<int> lowest_prime(N,1);
    for (int i=2;i<=N;i++){
        if(prime[i]==true){
            // lowest_prime[i]=highest_prime[i]=i;
            for(int j=2*i;j<N;j+=i){
                prime[j]=false;
            //     highest_prime[j]=i;
            //     if(lowest_prime[j]==0){
            //     lowest_prime[j]=i;
            //    }
            }
        }
    }// complexity n(log(log(n)))
    for (int i=1;i<=30;i++){
        // cout<<"highest pime "<< i<<" :"<<highest_prime[i]<<endl;
        // cout<<"lowest prime "<< i<<" :"<<lowest_prime[i]<<endl;
        // cout<<endl;
        if(prime[i]){
            cout<<i<<" ";
        }
    }

}