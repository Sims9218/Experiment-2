#include <iostream>
using namespace std;

int add(int x , int y)
{
	int z;
	z = x + y;
	return z;
}

short add(short x, short y)
{
	short z;
	z = x + y;
	return z;
}

float add(float x, float y)
{
	float z;
	z = x + y;
	return z;
}

double add(double x, double y)
{
	double z;
	z = x + y;
	return z;
}

long double add(long double x, long double y)
{
	long double z;
	z = x + y;
	return z;
}

long int add(long int x, long int  y)
{
	long int z;
	z = x + y;
	return z;
}

int main()
{
	int a, b, c, input;
	short d, e, f;
	float g, h, i;
	double j, k, l;
	long double m, n, o;
	long int p, q, r;
	
	do
	{
		cout << "1. To add 2 int digits" << endl;
		cout << "2. To add 2 short digits" << endl;
		cout << "3. To add 2 float digits" << endl;
		cout << "4. To add 2 double digits" << endl;
		cout << "5. To add 2 long double digits" << endl;
		cout << "6. To add 2 long int digits" << endl;
		cout << "7. Exit " << endl;
		cout << "Choose one of the options above: " << endl;
		cin >> input;
		
		switch(input)
		{
			case 1: cout << "Enter the first number : " << endl;
			        cin >> a;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> b;
			        
			        c = add(a, b);
			        
			        cout << "The result of the addition of 2 int type numbers are: " << c <<endl;
			        
			        break;
			        
			case 2: cout << "Enter the first number : " << endl;
			        cin >> d;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> e;
			        
			        f = add(d, e);
			        
			        cout << "The result of the addition of 2 short type numbers are: " << f << endl;
			        
			        break;
			        
			case 3: cout << "Enter the first number : " << endl;
			        cin >> g;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> h;
			        
			        i = add(g, h);
			        
			        cout << "The result of the addition of 2 float type numbers are: " << i <<endl;
			        
			        break;
			        
			case 4:cout << "Enter the first number : " << endl;
			        cin >> j;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> k;
			        
			        l = add(j , k);
			        
			        cout << "The result of the addition of 2 double type numbers are: " << l << endl;
			        
			        break;
			        
			case 5:cout << "Enter the first number : " << endl;
			        cin >> m;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> n;
			        
			        o = add(m , n); 
			        
			        cout << "The result of the addition of 2 long double type numbers are: " << o << endl;
			        
			        break;
			        
			case 6:cout << "Enter the first number : " << endl;
			        cin >> p;
			        
			        cout << "Enter the second number : "<< endl;
			        cin >> q;
			        
			        r = add(p , q);
			        
			        cout << "The result of the addition of 2 long int type numbers are: " << r << endl;
			        
			        break;
			        
			case 7:
			        break;
			        
			default:cout << "Invalid input"<<endl;
		}
	}while (input != 7);
	
	
	
}
