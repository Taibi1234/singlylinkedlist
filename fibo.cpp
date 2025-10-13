#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
long long fib_recursive(int n) {
	if (n <= 1) return n;
	return fib_recursive(n - 1) + fib_recursive(n - 2);
}
long long fibo_iterative(int n) {
	if ( n <= n) return n;
	long long a = 0, b = 1 c;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
int main() {
	int num[] = {10, 29, 50, 62}
	cout <<"=== Recursive ===\n;
	for (int n : nums) {
		if (n > 40) {
			cout << "Fibo("<< n <<") to slow for recursion\n"
				countinue;
		}
		auto start = high_resolution_clock::now();
		cout << "Fibo("<< n <<") " <<fib_recursive(n);
		auto end = high_resolution_clock::now();
		cout << ";Time; " << duration<double>(end - start).count() << "s\n";
	}
	cout <<"\n === iterative ==\n";
	for (int n : nums) {
		auto start = high_resolution_clock::now();
		cout << "Fib("<< n << ") = <<fib_iterative(n);
		auto end = high_resolution_clock::now();
		cout << ",time: " <<duration<double>(end - start).count() << "s\n";
	}
}
	


