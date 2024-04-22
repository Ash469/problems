#include <bits./stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
printBinary(n);
//CHECK BIT
// int k;
// cin>>k;
// if(n&(1<<k)){
//     cout<<"Bit is Set"<<endl;
// }else{
//     cout<<"Bit is not Set"<<endl;
// }

//SET BIT
// int k;
// cin>>k;
// n=n|(1<<k);
// printBinary(n);

//UNSET BIT
// int k;
// cin>>k;
// n=n&(~(1<<k));
// printBinary(n);

//TOGGLE BIT
// int k;
// cin>>k;
// n=n^(1<<k);
// printBinary(n);

//No of set bits
//cout<<__builtin_popcount(n)<<endl;

//Check odd or even
// if(n&1){
//     cout<<"Odd"<<endl;
// }else{
//     cout<<"Even"<<endl;
// }

//divide by 2
// n=n>>1;
// cout<<n<<endl;

}