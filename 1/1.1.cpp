#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	cout << " А ";
		cin >> A;
	cout << " B ";
		cin >> B;
	cout << " C ";
		cin >> C;

		if (A < B && B < C) {
			cout << "OK";
		}
		else {
			cout << "NOT OK";
		}
			return 0;
}