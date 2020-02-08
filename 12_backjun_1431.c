#include <iostream>
#include <algorithm>

using namespace std;

string serial[50];
int n;

int getSum(string a) {
	int length = a.length(), sum = 0;
	for (int i = 0; i < length; i++) {
		if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else {
		int aSum = getSum(a);
		int bSum = getSum(b);
		if (aSum != bSum) {
			return aSum < bSum;
		}
		else {
			return aSum > bSum;
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> serial[i];
	}

	sort(serial, serial + n, compare);
	
	for (int i = 0; i < n; i++) {
		if (i > 0 && serial[i] == serial[i - 1]) {
			continue;
		}
		else {
			if (i < n - 1) {
				cout << serial[i] << '\n';
			}
			else {
				cout << serial[i];
			}
		}
	}
	return 0;
}