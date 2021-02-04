#include<iostream>
using namespace std;
int main(){
	
	int num,rem,rev,a;
	cout << " Please enter digits : ";
	cin >> num;
	a=num;
	
	for( rev = 0 ; num > 0 ; num /= 10 ){
		
		rem = num%10;
		rev = rev*10 + rem;
		
	}
	
	
	if ( a == rev ){
				cout<< " Number is palindrome "<<endl;
	}
	
	else {
		cout<< " Number is not palindrome";
	}
	
	
	



	
	
	return 0;

}
