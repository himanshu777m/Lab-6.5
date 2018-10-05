//Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 

#include<iostream>
using namespace std;

int a=1,m=3,b=0.5;

int main(){
/*using for loop we start 0 fruit then use increment 
and write given condition in if strucure */
	for(int x=0; x<100; x++){
            for(int y=0; y<100; y++){
		for(int z=0; z<100; z++){

		    if((a*x + m*y + b*z)==100){
			if((x+y+z)==100){
			cout << "pieces of Apple: " << x <<endl;	
			cout << "pieces of Mangoes: " << y <<endl;
			cout << "pieces of Banana: " << z <<endl;
			}
		    }

		}
	    }
	}

return 0;
}
