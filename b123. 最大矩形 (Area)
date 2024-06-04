//b123. 最大矩形 (Area)
#include <iostream>

using namespace std;

int main() {
    int m,n;
    int area,width;
    while (cin>>m>>n){
        int arr[m][n];
        for (int i =0;i<m;i++)
        {
            for (int j=0; j<n; j++)
            {
                cin>> arr[i][j];
            }
        }
        for (int i=0;i<m;i++){
            for(int j=1; j<n ;j++){
                if (arr[i][j])
                    arr[i][j] = arr[i][j-1] +1;
            }
        }
        area = 0;
        for (int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                width =201;
                for (int h=0; h<=i && arr[i-h][j]; h++){
                    width = min(width,arr[i-h][j]);
                    area = max (area, width*(h+1));
                }
            }
        }
        cout <<area<<endl;
    }
    return 0;
}
