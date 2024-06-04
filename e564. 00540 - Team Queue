#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <map>
using namespace std;

struct team {
	int amount;
	queue <int> order;
};

int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	int amount, number, teamNumber, timeCount = 1;
	bool haveTeam[1000];
	string command;
	while (cin >> amount, amount) {
		team teams[1000];
		queue <int> teamQueue;
		map <int, int> belong;
		memset(haveTeam, false, sizeof(haveTeam));
		cout << "Scenario #" << timeCount++ << '\n';
		for (int i = 0; i < amount; ++i) {
			cin >> teams[i].amount;
			for (int j = 0; j < teams[i].amount; ++j)
				cin >> number, belong[number] = i;
		}
		while (cin >> command, command != "STOP") 
			if (command == "ENQUEUE") {
				cin >> number, teamNumber = belong[number];
				if (!haveTeam[teamNumber])
					teamQueue.push(teamNumber), haveTeam[teamNumber] = true;;
				teams[teamNumber].order.push(number);
			}
			else {
				teamNumber = teamQueue.front();
				cout << teams[teamNumber].order.front() << '\n';
				teams[teamNumber].order.pop();
				if (teams[teamNumber].order.empty())
					teamQueue.pop(), haveTeam[teamNumber] = false;
			}
		cout << '\n';
	}
}
