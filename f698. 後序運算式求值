#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	cin.sync_with_stdio(false); cin.tie(nullptr);
	int buffer1, buffer2;
	stack <int> numbers;
	string expression;
	while (cin >> expression)
		if (isdigit(expression[0]) || (expression.size() > 1))
			numbers.push(stoi(expression));
		else {
			buffer2 = numbers.top(); numbers.pop();
			buffer1 = numbers.top(); numbers.pop();
			switch (expression[0]) {
			case '+':
				numbers.push(buffer1 + buffer2);
				break;
			case '-':
				numbers.push(buffer1 - buffer2);
				break;
			case '*':
				numbers.push(buffer1 * buffer2);
				break;
			case '/':
				numbers.push(buffer1 / buffer2);
				break;
			}
		}
	cout << numbers.top() << '\n';
}
