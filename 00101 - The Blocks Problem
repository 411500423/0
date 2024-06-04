//00101 - The Blocks Problem
#include <iostream>
#include <vector>
using namespace std;

int n, a, b, pos[25], pa, pb;
string s1, s2;
vector <int> v[25];

int main() {
    while (cin >> n){
        for (int i = 0; i < n; i++){
            v[i].clear();
            v[i].push_back(i);
            pos[i] = i;
        }
        while (cin >> s1){
            if (s1 == "quit") break;
            cin >> a;
            cin >> s2;
            cin >> b;
            pa = pos[a];
            pb = pos[b];
            if (pos[a] == pos[b]) continue;
            if (s2 == "onto"){
                for (int i = v[pb].size()-1; i >= 0; i--){
                    if (v[pb][i] == b) break;
                    pos[v[pb][i]] = v[pb][i];
                    v[v[pb][i]].push_back(v[pb][i]);
                    v[pb].pop_back();
                }
            }
            if (s1 == "move"){
                for (int i = v[pa].size()-1; i >= 0; i--){
                    if (v[pa][i] == a){
                        pos[v[pa][i]] = pb;
                        v[pb].push_back(a);
                        v[pa].pop_back();
                        break;
                    }
                    pos[v[pa][i]] = v[pa][i];
                    v[v[pa][i]].push_back(v[pa][i]);
                    v[pa].pop_back();
                }
            }
            else {
                for (int i = v[pa].size()-1; i >= 0; i--){
                    if (v[pa][i] == a){
                        for (int j = i; j < v[pa].size(); j++){
                            pos[v[pa][j]] = pb;
                            v[pb].push_back(v[pa][j]);
                        }
                        for (int j = v[pa].size(); j > i; j--){
                            v[pa].pop_back();
                        }
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            cout << i << ":";
            for (int j:v[i]){
                cout << " " << j;
            }
            cout << "\n";
        }
    }
}
