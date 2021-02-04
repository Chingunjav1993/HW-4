#include<iostream>
using namespace std;
int main(){
	
	int num,sum = 1,rem;
	cout << " Please enter digits : ";
	cin >> num;
	
	
	for( sum = 1; num > 0 ; num /= 10 ){
		
		rem = num%10;
		sum *= rem;
	}
	
	
	cout << " Product of digits : "<<sum;
		

		
	



	
	
	return 0;

}
