#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n,d;
	while (cin >> n && n) {
		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i = 0;i<n;i++)
			{
				cin >>d;
				pq.push(d);
			}
		long long sum ,cost =0;
		while (pq.size() !=1)	{
			sum = pq.top();
			pq.pop();
			sum+=pq.top();
			pq.pop();
			cost +=sum;
			pq.push(sum);
		}
		cout << cost <<endl;
	}

	return 0;
}
