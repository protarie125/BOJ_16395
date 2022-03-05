#include <iostream>

using namespace std;

using ll = long long;

ll choose(int n, int r) {
	if (0 == r) {
		return 1;
	}

	if (1 == r) {
		return n;
	}

	auto ans = ll{ 1 };
	auto p = n;
	auto q = r;
	if (p / 2 < q) {
		q = p - q;
	}
	for (int i = 0; i < q; ++i) {
		ans *= p;
		p -= 1;
	}

	auto q2 = q;
	for (int i = 0; i < q; ++i) {
		ans /= q2;
		q2 -= 1;
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	cout << choose(n - 1, k - 1);

	return 0;
}