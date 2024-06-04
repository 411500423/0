//10474 - Where is the marble
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.sync_with_stdio(false), cin.tie(nullptr);
    int timesCount = 1, amount, queries, target, numbers[10000], *index;
    while (cin >> amount >> queries, amount && queries) {
        cout << "CASE# " << timesCount++ << ":\n";
        for (int i = 0; i < amount; ++i)
            cin >> numbers[i];
        sort(numbers, numbers + amount);
        while (queries--) {
            cin >> target, cout << target;
            index = lower_bound(numbers, numbers + amount, target);
            if (index == numbers + amount || *index != target)
                cout << " not found\n";
            else
                cout << " found at " << (int)(index - numbers + 1) << '\n';
        }
    }
}
