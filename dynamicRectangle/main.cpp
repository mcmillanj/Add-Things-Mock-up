#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	const int ARR_SIZE = 3;
	
	Rectangle* rectPtrs[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		
		rectPtrs[0] = new Rectangle(2, 8);
		rectPtrs[1] = new Rectangle(5, 3);
		rectPtrs[2] = new Rectangle(6, 4);
	}
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << rectPtrs[i]->perimeter() << endl;
		cout << rectPtrs[i]->area() << endl;
		cout << endl;
	}
	
	for (int i = 0; i < ARR_SIZE; i++)
	{
		delete rectPtrs[i];
		rectPtrs[i] = nullptr;
	}
	
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "r1 area is " << r1.area() << endl;
	cout << "r2 area is " << r2.area() << endl;

	r1.setLength(22);
	r1.setWidth(12);

	cout << "r1 length is now " << r1.getLength() << endl;
	cout << "r1 width is now " << r1.getWidth() << endl;

	cout << "r1 area is NOW " << r1.area() << endl;

	cout << "r1 perimeter is " << r1.perimeter() << endl;
	cout << "r2 perimeter is " << r2.perimeter() << endl;

	return 0;
}