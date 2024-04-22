//sliding window
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int k;
    cin>>k;
 string s;
 cin>>s;
int zerocnt=0,i=0,ans=0;
for(int j=0;j<s.length();j++){
    if(s[j]=='0')
        zerocnt++;
    while (zerocnt>k)
    {
        if(s[i]=='0'){
            zerocnt--;
        }
        i++;
    }
    ans=max(ans,j-i+1);
}
cout<<ans;
}