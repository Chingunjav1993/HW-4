#include<iostream>

using namespace std;

int main(){
	int num,count = 0,num1,lastDigit,firstDigit;
	cout<<"Enter an integer: ";
	cin>>num;
	num1 = num;
	
	for(int i = 0; num>0; num/=10){
		count++; //niit tsiphriin too
	}
	
	num = num1;	
	lastDigit = num%10; //suulchiin too
	
	for(int i = 0; num>0; num/=10){
		firstDigit = num; //ehnii too
	}
	
	//za urwuulsaaaaaaa
	int temp=1,newNum;
	for(int i = 1; i<count; i++){
		temp = temp*10;
	}
	
	
	num = num1;
	newNum = num%temp;	//ehnii toonoos busdiig n avsan
	newNum = newNum/10; //ariin toog hassan
	newNum = newNum*10 + firstDigit; //butsaagaad 0 nemj bgad ehnii toog nemj bairshuulsan
	newNum = newNum + lastDigit*temp; // ariin toog temp eer urjuuleed urdah toog nemsen
	
	
	cout<<newNum;
	
	return 0;
}
