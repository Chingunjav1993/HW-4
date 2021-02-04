#include<iostream>
using namespace std;
int main(){
	
	int num,rem,rev;
	cout << " Please enter digits : ";
	cin >> num;
	
	for( rev = 0 ; num > 0 ; num /= 10 ){
		
		rem = num%10;
		rev = rev*10 + rem;
		
		
		
	}
	
	cout<< " reverse is : "<<rev;
	



	
	
	return 0;

}
