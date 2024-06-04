//00340 - Master-Mind Hints
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int game = 0;
    int n ;
    int A,B,zeroNum,sc,gc;
    vector <int> s(n);
    vector <int> g(n);

    while (cin >> n &&n!=0)
    {
        printf ("Game %d:\n",++game);
        for (int i=0 ; i<n ; i++)
        {
            cin >>s[i];
        }
        while (true)
        {
            A =0;
            zeroNum = 0;
            for (int i = 0; i<n ;i++)
            {
                cin >> g[i];
                if (s[i] == g[i] )
                    A++;
                if (g[i] == 0)
                    zeroNum++;
            }
            if (zeroNum == n)
                break;
            B =0;
            for ( int d= 0; d<=9; d++)
            {
                sc = 0;
                gc = 0;
                for (int i=0; i<n; i++)
                {
                    if (s[i] ==d )
                        sc++;
                    if (g[i] ==d )
                        gc++;
                }
                B += min (sc,gc);
            }
            printf("    (%d,%d)\n",A,B-A);
        }
    }
    return 0;
}
