//00272 - TeX Quotes
#include <iostream>
using namespace std;

string s;
int cnt, blk;

int main() {
    while (getline(cin, s)){
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '\"'){
                if (cnt % 2 == 0) cout << "``";
                else cout << "''";
                cnt++;
            }
            else cout << s[i];
        }
        cout << "\n";
    }
}
