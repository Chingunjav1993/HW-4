#include<iostream>
using namespace std;
int main(){
	
	int num,sum = 0,rem;
	cout << " Please enter digits : ";
	cin >> num;
	
	
	for( sum = 0; num > 0 ; num /= 10 ){
		
		rem = num%10;
		sum += rem;
	}
	
	
	cout << " Sum of digits : "<<sum;
		

		
	



	
	
	return 0;

}
