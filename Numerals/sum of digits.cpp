#include<iostream>
using namespace std ;

int main()
{
	int num , rem=0, sum=0 ;
	
	cout << " Enter the Number : " ;
	cin >> num ;
	
	while( num!=0 )
	{
		rem = num % 10 ;
		sum = sum + rem ;
		num = num / 10 ;
	}
	
	cout << " The sum = " << sum ;
	
	return 0 ;
}
