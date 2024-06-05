#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int idx=0;
string track;
// return cost and head and tail
ll seq(int &head, int &tail) {
    ll total = 0, t;
    head = tail = -1;
    while (true) {
        if (idx>=track.length()) return total;
        if (track[idx]=='T') {
            t = stoi(track.substr(idx+1,2));
            idx += 3;
            if (tail<0) head = t;
            else total += abs(tail-t);
            tail = t;
        } else if (track[idx]=='L') {
            t = stoi(track.substr(idx+1,1));
            idx += 2;
            int h,e;
            ll cost = seq(h,e);
            if (tail<0) head = h;
            else total += abs(tail-h);
            tail = e;
            total += cost*t+abs(h-e)*(t-1);
        } else { // E
            idx += 1;
            return total;
        }
    }
}

int main() {
    int xx,i,j;
    cin >>track;
    ll total = seq(i,j);
    total += abs(10-i);
    cout << total <<endl;
    return 0;
}
