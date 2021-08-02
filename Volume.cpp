#include <iostream>
using namespace std;
float v;

float volume(int a)
{
	v = (a * a * a);
	return v;
}

float volume(float r)
{
	v = (4/3) * (3.14 * r * r * r);
	return v;
}

float volume(int r, int h)
{
	v = (3.14 * r * r * h);
	return v;
}

float volume(float r, float h)
{
	v = (3.14 * r * r *h)/3;
	return v;
}

int main()
{	
	float rsphere;
	int rcylinder, hcylinder;
	float rcone , hcone;
	int aside;
	float vcube, vsphere, vcylinder, vcone, vtotal;
	int input;

	do
	{	
		cout << "1. To find volume of Cube: " << endl;
		cout << "2. To find volume of Sphere: " << endl;
		cout << "3. To find volume of Cylinder: " << endl;
		cout << "4. To find volume of Cone: " << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> input;

		switch (input)
		{
			case 1: cout << " Enter the side of the cube: ";
			        cin >> aside;
			        cout << endl;
			        
			        vcube = volume(aside);
			        cout << "The volume of cube is: "<< vcube <<endl;
			        
			        break; 
			
			case 2: cout << " Enter the radius of the sphere: ";
			        cin >> rsphere;
			        cout<< endl;
			        
			        vsphere =  volume(rsphere);
			        cout << "The volume of Sphere is: " << vsphere <<endl; 
			        
			        break;
			
			case 3: cout << "Enter the radius of the cylinder: ";
			        cin >> rcylinder; 
			        cout << endl;
			        
			        cout << "Enter the height of the cylinder: ";
			        cin >> hcylinder;
			        cout << endl; 
			        
			        vcylinder = volume(rcylinder, hcylinder);
			        cout << "The volume of Cylinder is: " << vcylinder << endl;
			        
			        break;
			
			case 4: cout << "Enter the radius of the cone: ";
			        cin >> rcone; 
			        cout << endl;
			        
			        cout << "Enter the height of the cone: ";
			        cin >> hcone;
			        cout << endl; 
			        
			        vcone = volume(rcone, hcone);
			        cout << "The volume of Cone is: " << vcone <<endl;
			        
			        break;
			        
			case 5:
			        break;
			        
			default: cout << "Invalid input";
		}
	}
	while(input != 5);
	
	vtotal = vcube + vsphere + vcylinder + vcone;
	cout << "Cumulative volume of all the shapes is: " << vtotal << endl;
	
}
