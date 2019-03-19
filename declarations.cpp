#include <iostream>
#include <memory>
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
	cout << "Day is: " << ptr->d << endl;
	cout << "Year is: " << ptr -> y << endl;
	
	auto array1 = make_unique<double []>(5);
	for (int i=0; i < 5; i++)
		array1[i] = 3.1415;

	for(int i=0; i < 5; i++)
		cout << array1[i]  << endl;


	int n = -3;

	cout << abs(n) << endl; 
	

}
