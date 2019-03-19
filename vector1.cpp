// vector1.cpp:  vector container class
// lmolina
// 2019-03-17

#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	int n;
	double d=0.0;
	cout << "Enter array size: " << endl;
	cin >> n;
	const double pi = 3.14159265358979323846;
	vector<double> array0;

	for (int i=0; i < n ; ++i){
		d = pi / (i+1.0);
		array0.push_back(d);
	}

	for (auto x : array0)
			cout << x << endl;

}
