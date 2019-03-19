#include <iostream>
#include <string>

using namespace std;


class Name {
	private:
			string first;
			string last_name;
			int age;
	public:
			Name(){}
			Name(string f, string l, int a);
			void displayName();	
};


Name::Name(string f, string l, int a)
{
	first = f;
	last_name = l;
	age = a;

}

void Name::displayName()
{

	cout << "First Name: " << first << endl;
	cout << "Last Name: " << last_name << endl;
	cout << "Age: " << age << endl;

}


int main(){
	Name nm("Luis", "Molina", 43), *ptr;

	ptr = &nm;

	ptr -> displayName();

	return 0;
}
