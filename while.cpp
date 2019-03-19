#include <iostream>
using namespace std;

int hashpjw(char *s)
{
	const int prime = 211;
	unsigned hash = 0, g;

	for (char *p = s; *p; p++){
		hash = ( hash << 4 ) + *p;
		// assume 32 bit int size
		if ( (g = hash & 0xf0000000) ) {
		hash ^= g >> 24;
		hash ^= g;
		}
	
	}
	return hash % prime;
}


int main()
{
	int t = 21;
	while (--t){
		
		cout << t << endl;
	}
	cout << endl;
	char* name {"Luis"};
	cout << hashpjw(name) << endl;
	return 0;

}
