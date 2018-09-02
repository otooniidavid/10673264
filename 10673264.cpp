#include <iostream>
 
 using namespace std;
 
 int main(){
 	
 int a;
 cout << "Enter your marks" <<endl;
 cin >> a;
 
      if(a >= 80){
     	cout << "A" <<endl;
  }
      
	   if(a<80 && a>=75){
     	cout <<" B+" <<endl;
  }
  
  
  
  
            if(a < 75 && a>=70){
                  	cout << " B" << endl;
	}
         	if(a<70 && a>=65){
	        	cout <<" C+ " << endl;
		}
	             	if(a <65 && a>=60){
			cout <<" C" <<endl;
		}
	          	if(a <60 && a>=55){
	 		cout << " D+" <<endl;
		}
	                		if(a <55 && a>=50){
			cout << " D" <<endl;
		}
	          		if(a <50 && a>=45){
			cout << " E" <<endl;
			
	      		}if(a<45){
				cout << " F" <<endl;
				cout << " Please sit up because you are not a failure" <<endl;
			}
			    
 }
