//b838. 104北二2.括號問題
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        int count = 0;
        stack <int> stk;
        cin >> s;
        for (int j = 0; j < s.length(); j ++){
            if (!stk.empty() && stk.top() == '(' && s[j] == ')'){
                stk.pop();
                count ++;
            }else{
                stk.push(s[j]);
            }
        }
        if (!stk.empty()){
            count = 0;
        }
        cout << count << endl;
    }
}