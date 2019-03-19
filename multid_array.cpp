#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int cols = 10;


	auto myArray = make_unique<int []>(cols);

	for (int i = 0; i < cols; ++i)
			myArray[i] = i+1;


	for(int i=0; i < cols; ++i)
			cout << myArray[i] << endl;


}

