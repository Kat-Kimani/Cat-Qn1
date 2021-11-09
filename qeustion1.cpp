//Calculating the Area and the Volume of a Cylinder
#include<iostream>
using namespace std;
int main() {
	const float pi = 3.141592;
	int radius, height;
	int area, volume;
	int surfacearea;
	int diametre;

	
	cout << "Area of a Cylinder \n";
	cout << " Enter the Radius: \n";
	cin >> radius;
	cout << "Enter the Height: \n";
	cin>> height;
	diametre = (radius * 2);
	surfacearea = 2 * (pi * radius * radius);
	area = ((pi * diametre * height) + surfacearea);
	volume = ((pi * radius * radius) * height);

	cout << "Area of a Cylinder is : " << area << " \n";

	return 0;
}