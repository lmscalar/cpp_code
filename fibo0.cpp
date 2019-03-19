// fibo1.cpp:  DP fibonacci number generator
//

#include <iostream>
#include <vector>

using namespace std;

int  fibo(const int&  n)
{
	int F[n+1];

	F[0] = 0; F[1] = 1;

	if ( n > 1 ){
		for (int i = 2; i <= n; ++i){
				F[i] = F[i-1] + F[i-2];
		}
	}

	return F[n];
}

int main()
{
	int n;
	cout << "Enter number for Fibo: " << endl;
	cin >> n;
	int d = fibo(n);
	cout << "Fibonacci n=" << n << " " << d << endl;
}
