#include <bits/stdc++.h>
using namespace std;

// Power Function
// Function takes two arguments and returns x to the power of y
// Example: F(x,y) = F(2,3) = 2^3 = 8

int power(int x, int y){
	int ans = 1;
	for(int i = 1; i <= y; i++){ //iterating over y
		ans = ans*x; //updating ans
	}
	return ans;
}

//Power Function using recursion
// Example: F(a,b) = F(3,2) = 3^2 = 9
int pow(int a, int b){
	//base case
	if(b == 0){ //if power is zero it returns 1, 2^0 = 1
		return 1;
	}
	if(a == 0){ //anything to the power of 0 returns 0
		return 0;
	}
	//recursive case
	int ans = a*pow(a, b-1);
	return ans;
}