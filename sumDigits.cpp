#include<iostream>
using namespace std;
int main (){
	
	int num,count=0;
	cout<< " please enter digits : ";
	cin>>num;
	
	
	
	for( int i = 0; num>0; num/=10 ){
		
		count++;
		
	}
	
	cout<< " numbers of digits are : "<<count;
	
	
	
	
	return 0;
}
