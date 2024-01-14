#include <bits/stdc++.h>
using namespace std;

// Finding factorial using for loop
// Function fact takes a number as an argument and returns it's factorial

int fact(int n){
	int ans = 1;
	
	for(int i = 1; i <= n; i++){
		ans = ans*i;
	}
	return ans;
}




// Factorial using recursion
// factorial of n: n! = 1*2*3*4....*(n-1)*(n)

int factorial(int n){
	if(n==0){  
		return 1; //base case	
	}
    	int ans = n*factorial(n-1){
		return ans;
	}
}

