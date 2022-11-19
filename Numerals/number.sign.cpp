#include<iostream>
using namespace std;

int main()
{
	int num ;
	
	cout << " Enter the Number : ";
	cin >> num ;
	
	if( num > 0 )
	cout << " The Number is positive " ;
	else if( num < 0 )
	cout << " The Number is negative " ;
	else 
	cout << " The Number is Zero " ;
	
	return 0 ;
}
