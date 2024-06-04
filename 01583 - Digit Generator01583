//01583 - Digit Generator01583 - Digit Generator
#include <iostream>

using namespace std;

int t[100001] = {0};

int main() {
    int x, y;
    int T, m;

    for(int n=0; n<=100000; n++) {
        y = n;
        x = n;

        while(x > 0) {
            y = y + x % 10;
            x = x / 10;
        }

        if(y > 100000)
            continue;
        if(t[y] == 0)
            t[y] = n;
    }

    cin >> T;
    while(T--) {
        cin >> m;
        cout << t[m] << endl;
    }

    return 0;
}
