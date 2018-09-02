#include <iostream>
using namespace std;


int main(){
	int a;
	int b =1;
	int count =0;
	
	cout << " Please Enter Your Number"<< endl;
	cin >>a;
	
	
	while( b<=a){
	
	if (a%b==0){
		count ++;
	}
		
		
		
	else{
		b ++;
	}
}
             if(count ==2){
             	cout <<" Is a prime number and the factors are { 1,"<<a" }" <<endl;
             	
			 }
}
