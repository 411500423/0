//j121. 01339 - Ancient Cipher

#include <iostream>
using namespace std;

int a[26], b[26], n[105], m[105], l;
string s1, s2;

int main() {
    while (cin >> s1 >> s2){
        l = s1.length();
        for (int i = 0; i < 26; i++){
            a[i] = 0;
            b[i] = 0;
        }
        for (int i = 0; i < l; i++){
            a[s1[i]-'A']++;
            b[s2[i]-'A']++;
            n[i] = 0;
            m[i] = 0;
        }
        for (int i = 0; i < 26; i++){
            n[a[i]]++;
            m[b[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < l; i++){
            if (n[i] != m[i]){
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
