// 00401 - Palindromes
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string  originalT = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string mirrorT =    "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
bool isP(string s){
    string rs = s;
    reverse(rs.begin(),rs.end());
return rs ==s;
}
bool isM (string s){
    int index;
    string rs = s;
    reverse(rs.begin(),rs.end());
    for (int i = 0;i<s.size();i++){
        index = originalT.find(rs[i]);
        rs[i] = mirrorT[index];
    }
return rs ==s;

}
int main() {
   string s;
   bool p,m;
   while (cin >>s){
       p =isP(s);
       m =isM(s);
       cout <<s<<" -- is ";
       if ( p && m)
           cout << "a mirrored palindrome.";
       else if (p)
           cout << "a regular palindrome.";
       else if (m)
           cout << "a mirrored string.";
       else
           cout << "not a palindrome.";
       cout << "\n\n";

   }
    return 0;
}
