#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	while (0 != a || 0 != b) {
		cout << (a <= b ? "No" : "Yes") << '\n';

		cin >> a >> b;
	}

	return 0;
}