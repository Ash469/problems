// // //#include <bits/stdc++.h>
// // #include<iostream>
// // using namespace std;

// // string longestPalSubstring(string s){
// //     /*
// //         If length of given string is n then its length after
// //         inserting n+1 "#", one "@", and one "$" will be
// //         (n) + (n+1) + (1) + (1) = 2n+3
// //     */
// //     int strLen = 2 * s.length() + 3;
// //     char* sChars = new char[strLen];

// //     /*
// //         Inserting special characters to ignore special cases
// //         at the beginning and end of the array
// //         "abc" -> @ # a # b # c # $
// //         "" -> @#$
// //         "a" -> @ # a # $
// //     */
// //     sChars[0] = '@';
// //     sChars[strLen - 1] = '$';
// //     int t = 1;

// //     for (char c : s){
// //         sChars[t++] = '#';
// //         sChars[t++] = c;
// //     }
// //     sChars[t] = '#';

// //     int maxLen = 0;
// //     int start = 0;
// //     int maxRight = 0;
// //     int center = 0;
// //     int* p = new int[strLen]; // i's radius, which doesn't include i

// //     for(int i = 1; i < strLen - 1; i++){
// //         if (i < maxRight){
// //             p[i] = min(maxRight - i, p[2 * center - i]);
// //         }

// //         // Expanding along the center
// //         while (sChars[i + p[i] + 1] == sChars[i - p[i] - 1]){
// //             p[i]++;
// //         }

// //         // Updating center and its bound
// //         if (i + p[i] > maxRight){
// //             center = i;
// //             maxRight = i + p[i];
// //         }

// //         // Updating ans
// //         if (p[i] > maxLen){
// //             start = (i - p[i] - 1) / 2;
// //             maxLen = p[i];
// //         }
// //     }

// //     // Returning the longest palindromic substring
// //     return s.substr(start, maxLen);
// // }

// // int main(){
// // 	string word = "findnitianhere";
// // 	cout <<longestPalSubstring(word)<< endl;
// // 	return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int expand_around_center(string s, int left, int right) {
// 	int L = left, R = right;
// 	while (L >= 0 && R < s.length() && s[L] == s[R]) {
// 		L--;
// 		R++;
// 	}
// 	return R - L - 1;//length of palindrome string
// }
// string longest_palindrome(string s) {
// 	int start = 0, end = 0;
// 	for (int i = 0; i < s.length(); i++) {
// 		int len1 = expand_around_center(s, i, i);
// 		//int len2 = expand_around_center(s, i, i + 1);
// 		//int len = max(len1, len2);
// 		if (len1 > end - start){
// 			start = i - (len1 - 1) / 2;
// 			end = i + len1 / 2;
// 		}
// 	}
// 	return s.substr(start, end - start + 1);
// }

// int main(){
// 	string word = "sydsushjahe";
// 	cout << longest_palindrome(word) << endl;
// 	return 0;
// }
#include <iostream>
using namespace std;
int minOperations(int k) {
        int count=0;
        int max=k;
        if(k<=1){
            return 0;
          }
        else{
            int i=2;
        while(count<=max){
            int x=i-1;
            int y=k/i;
            if(k%i==0){
            y=y-1;  
            }
            count=x+y;
            if(count<=max){
                max=count;
				cout<<max<<endl;
                 i++;
            }
        
         }
          return max;
        }
      
    }
int main(){
cout<<minOperations(12)<<endl;
}