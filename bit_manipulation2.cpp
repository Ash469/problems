#include <iostream>
#include<algorithm>
using namespace std;
int main(){
//CHANGE LOWER CASE TO UPPER CASE
//LOWER CASE HAS 5th BIT SET
//UPPER CASE HAS 5th BIT UNSET
// char c;
// cin>>c;
// if(c>='a' && c<='z'){
//     c=c&(~(1<<5));//('c'|'_')=UPPER CASE
//     cout<<c<<endl;
// }else if(c>='A' && c<='Z'){
//     c=c|(1<<5);//('c'&'_')=LOWER CASE
//     cout<<c<<endl;
// }

//Check Duplicate elements
//x^X=0   x^0=x
// int a[]={1,2,3,4,5,6,7,8,9,1};
// int n=sizeof(a)/sizeof(a[0]);
// int ans=0;
// for(int i=0;i<n;i++){
//     ans=ans^a[i];
// }
// cout<<ans<<endl;
// }

//swap two numbers
// int a,b;
// cin>>a>>b;
// a=a^b;
// b=a^b;
// a=a^b;
// cout<<a<<" "<<b<<endl;

//Intersection of two arrays
int a[]={1,2,3,4,5,6,7,8,9};
int b[]={1,2,3,4,6,7,8,9,10};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
int x=*max_element(a,a+n);
int y=*max_element(b,b+m);

//bit masking
int c=0;
int d=0;
for(int i=0;i<n;i++){
    c=c|(1<<a[i]);
}
for(int i=0;i<m;i++){
    d=d|(1<<b[i]);
}
int ans=c&d;// intersection
//int ans=c|d;// union
//int ans=c^d;// unique elements
for(int i=0;i<=max(x,y);i++){
    if(ans&(1<<i)){
        cout<<i<<" ";
    }
}
}