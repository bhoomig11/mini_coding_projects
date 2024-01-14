#include <bits/stdc++.h>
using namespace std;

// Fibonacci number
// Given n, function returns F(n) 
// Using for loop here

int fib(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	int a = 0; 
	int b = 1;
	int c;
	for(int i = 2; i <= n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


// Fibonacci number using recursion
// Fibonacci Series is formed where the current number 
// is the sum of last two numbers
// Example: 1,1,2,3,5,8,13,21,34,55...
// F(0) = F(1) = 1

int fibonacci(int n){
	if(n==0 or n==1){
		return 1; //base case	
	}
	//recursive case
	int f1 = fibonacci(n-1);
	int f2 = fibonacci(n-2);
	return f1 + f2; //sum of previous two
}



