//f166. 傳送點
#include <iostream>
#include <queue>
 using namespace std;
int  S[1000000];
int count [1000000];
int main() {
    int n,P,L,R;
    int currentP,newL,newR;
    queue<int> q;
    cin >> n >> P >> L >> R;
    for (int i=0; i<n ; i++)
    {
        cin >>S[i];
    }
    q.push (0);
    while (true){
        if (q.empty()){
            cout << -1;
            break;
        }
        currentP = q.front();
        q.pop();
        if (currentP ==P){
            cout << count[currentP];
            break;
        }
        newL = currentP - L;
        if (newL >= 0){
            newL = S[newL];
            if (newL >=0 && newL <n && count[newL]==0){
                count[newL]= count[currentP]+1;
                q.push(newL);
            }
        }
        newR = currentP + R;
        if (newR < n){
            newR = S[newR];
            if (newR >= 0 && newR <n && count[newR]==0){
                count[newR]= count[currentP]+1;
                q.push(newR);
            }
        }
    }
    return 0;
}
