#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, in, x;
	
	while (cin >> n) {

		queue<int> q;
		priority_queue<int> pq;
		stack<int> s;
		bool isq = true, ispq = true, iss = true;

		while (n--) {

			cin >> in >> x;

			if (in == 1) {
				q.emplace(x);
				pq.emplace(x);
				s.emplace(x);
			}
			else {
				if (isq)
					if (!q.empty() && q.front() == x) q.pop();
					else isq = false;
				if (ispq)
					if (!pq.empty() && pq.top() == x) pq.pop();
					else ispq = false;
				if (iss)
					if (!s.empty() && s.top() == x) s.pop();
					else iss = false;
			}
		}

		if ((isq && iss) || (isq && ispq) || (ispq && iss)) cout << "not sure\n";
		else if (isq) cout << "queue\n";
		else if (ispq) cout << "priority queue\n";
		else if (iss) cout << "stack\n";
		else cout << "impossible\n";
	}

	return 0;
}
