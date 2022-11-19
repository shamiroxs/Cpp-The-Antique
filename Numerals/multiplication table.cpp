#include<iostream>
using namespace std;

int main()
{
	int num, i , product ;
	
	cout << " Enter the Number : " ;
	cin >> num ;
	
	for( i=1 ; i<=12 ; i++)
	{
		product = i*num ;
		cout << i << " x " << num << " = " << product << "\n" ;
	}
	
	return 0;
}
