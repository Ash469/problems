//Indian coin change problem
/*
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
int n;
cin>>n;
 vector<int> a(n);
 rep(i,0,n)
  cin>>a[i];

int x;
cin>>x;

sort(a.begin(),a.end(),greater<int>());//sort in decreasing order
int ans=0;
for(int i=0;i<n;i++){
    ans+=x/a[i];
    x-=x/a[i] *a[i];
}
 cout<<ans<<endl;

}
*/
//Activity problem
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }
    //custom compartor
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });
    int take=1;
    int end=v[0][1];
    rep(i,1,n)
      if(v[i][0]>=end){
        take++;
        end=v[i][1];
      }

    cout<<take<<"\n";


}