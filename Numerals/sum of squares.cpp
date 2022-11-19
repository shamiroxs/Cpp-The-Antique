#include<iostream>
using namespace std ;

int main()
{
	int n , i , ans=0 ;
	
	cout << " Enter the Number : " ;
	cin >> n;
	
	for ( i=1 ; i<=n ; i++ )
		ans = ans + i*i ;
		
	cout << " Answer = " << ans ;
	
	return 0 ;
}
