#include <iostream>
using namespace std;


int max_sm(int * p1, int a)
{
	int max = 0;
	for(int i = 0; i < a; i++)
	{
        	if(max < *p1)
		{
		    max = *p1;
		}             
		*p1++;
	}
	return max;
    
}


int min_sm(int *p2 , int b)
{
	int min;
	for(int i = 0; i < b; i++)
	{                                
        	if(min > *p2)
		{                      
		    min = *p2;
		}                      
		*p2++;
	}                                      
	return min;
}

int main()
{
	int  x, y;
	int marks[100], n, input, i;
	
	cout<<"No. of students marks to be taken: "<<  endl;
	cin >> n;
	
	cout << "Enter the marks: ";
	for (i = 0; i < n; i++)
	{
		cin >> marks[i];
	}
	cout << endl;
	
	do
	{
		cout << "1. Maximum " << endl;
		cout << "2. Minimum " << endl;
		cout << "3. Exit " << endl;
		cout << "Enter one of the options above: ";
		cin >> input;
		cout << endl;
		
		switch(input)
		{
			case 1: x = max_sm(marks, n);
				cout <<"Maximum value is: "<< x << endl;
			        break;
			case 2: y = min_sm(marks, n);
			        cout << "Minimum value is: " << y << endl;
			        break;
			case 3:
			        break;
			default: cout << "Invalid choice";                	  
		}
		
	}while(input != 3);
}
