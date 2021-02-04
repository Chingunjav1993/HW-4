#include<iostream>
using namespace std;
int main(){
	
	int num, firstDigit, lastDigit;
	cout << " Please enter digits : ";
	cin >> num;
	lastDigit = num%10;
	
	for( firstDigit=num; firstDigit>=10; firstDigit/=10 );
	
	cout<<" First digit is : "<<firstDigit<<endl;	
	cout<<" Last digit is : " <<lastDigit;



	
	
	return 0;

}
