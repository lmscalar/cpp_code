#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Date {int d, m, y;};


int day(Date* p) {return p->d;}

template<typename T> 
T abs(T a) 
{
	return a < 0 ? -a : a;
}

int main()
{
	const double pi{3.1415926535897};

	const char* name = "Pussy Galore";
	const char* season[] = {"spring", "summer", "fall", "winter"};
	vector<string> people{name, "Skarphedin", "Gunnar"};

	cout << pi << endl;
	for (string x: people)
		cout << x << endl;

	Date dt, *ptr;
	ptr = &dt;
	dt.d = 21;
	dt.m = 7;
	dt.y = 1962;

	int k = day(ptr);
	cout << "Day is : " << k << endl;
	cout << "Month is: " << ptr -> m << endl;
	cout << "Year is: " << ptr -> y << endl;
	
	int n = -3;

	cout << abs(n) << endl; 
	

}
