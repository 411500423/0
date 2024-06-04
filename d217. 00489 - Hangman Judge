#include <iostream>
#include <cstring>
using namespace std;

int n, ans[26], guess[26], r, w;
string s;
bool flag;

int main() {
    while (cin >> n){
        if (n == -1) break;
        cin >> s;
        r = 0;
        w = 0;
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < s.length(); i++){
            if (ans[s[i]-'a'] == 0){
                ans[s[i]-'a'] = 1;
                r++;
            }
        }
        cin >> s;
        flag = true;
        memset(guess, 0, sizeof(guess));
        for (int i = 0; i < s.length(); i++){
            if (guess[s[i]-'a'] == 1) continue;
            guess[s[i]-'a'] = 1;
            if (ans[s[i]-'a'] == 1){
                r--;
                ans[s[i]-'a'] = 0;
            }
            else {
                w++;
                if (w == 7 && r > 0) flag = false;
            }
        }
        cout << "Round " << n << "\n";
        if (r == 0 && flag) cout << "You win.\n";
        else if (flag) cout << "You chickened out.\n";
        else cout << "You lose.\n";
    }
}
