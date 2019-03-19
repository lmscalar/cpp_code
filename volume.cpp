#include <iostream>


using namespace std;


class Box {
		double height;
		double base;
		double width;
	public:
		Box(double b = 3.0, double h = 2.0, double w = 1.5)
		{   // constructor
			height = h;
			base =  b;
			width = w;
		}	
		
		~Box(){ cout << "This the destructor" << endl;}

		double Volume()
		{
			return height * base * width;
		}	

		int compare(Box box)
		{
			return this->Volume() > box.Volume();
		}

};

int main()
{
	Box box1(1.3, 2.5, 8.3), *ptr1;
	Box box2(2.3, 3.5, 9.5), *ptr2;
	
	ptr1 = &box1;   // pointer to object Box
	ptr2 = &box2;

	if ( box1.compare(box2)){
			
		cout << "Box1 is bigger than Box2" << endl;
		cout << "Area of box1: " << ptr1->Volume() << endl;
		cout << "Area of box2: " << ptr2->Volume() << endl;	
	} else {
	
		cout << "Box2 is bigger or equal to Box1" << endl;
		cout << "Area of box2: " << ptr2->Volume() << endl;
		cout << "Area of box1: " << ptr1->Volume() << endl;
	}
}


