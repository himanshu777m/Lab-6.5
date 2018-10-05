/* The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)  */

#include<iostream>
#include<cmath>
using namespace std;


int sum(int n){
	if(n==1){
		 return 1;
	}
	else{
		 return (n + sum(n-1));      //sum(n)=n+sum(n-1)
	}	
}

int main()
{

for(long i=0; i<100000; i++){
	for(long n=1; n<10000; n++){
		if(sqrt(i)==int(sqrt(i))){
			if(i==sum(n)){
				cout << i <<endl;
			}
		}
	}
}

return 0;
}
