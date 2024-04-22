#include<bits./stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //DIVISORS :-
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // } cpmplexity O(n)

    // for(int i=1;i*i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(i!=n/i){//this for perfect square number
    //             cout<<n/i<<" ";
    //         }
    //     }
    // } // complexity O(sqrt(n))
    
    //PRIME FACTORIZATION
    vector<int>prime_factorization;
    for(int i=2;i<=n;i++){
        while(n%i==0){  //kill all prime 
         prime_factorization.push_back(i);
         n/=i;
        }
    }// complexity o(N)
    
    // for(int i=2;i<=sqrt(n);i++){
    //      while(n%i==0){  //kill all prime 
    //      prime_factorization.push_back(i);
    //      n/=i;
    //     }
    //     if(n>1){
    //           prime_factorization.push_back(n);
    //     }
    // }
    for(auto it:prime_factorization){
        cout<<it<<" ";
    }//complexity O(squrt(n))
    return 0;
}