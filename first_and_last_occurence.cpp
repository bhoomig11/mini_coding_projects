#include <bits/stdc++.h>
using namespace std;


// First Occurence
// Given an array, building a function that returns the index of the first occurence of the element "target" in the array
   
int check(int *arr, int i, int target){
	if(arr[i] == target){ //returns the index of target, if it is found
		return i;
	}
	return check(arr, i+1, target); 
	//functions repeats for the next value if not found
}


int getFirstOccurence(int*arr, int target){
	if(check(arr, 0, target)){
		return check(arr, 0, target);	
	}
	return false;
}


// Last Occurence
// Building a function that returns the index of the last occurence of the element "target" in the array
// Example- input: arr = [1,3,4,10,3,5], target = 3
// output: 4 (3 occurs twice in the array and last occurence is at 4th index)

//n is the size of the array
int getLastOccurence(int *arr, int n, int target){ 
	
	if(n == 0){ //size of array is 0
		return -1; 
	}
	//recursive case
	int subindex = getLastOccurence(arr + 1, n - 1, target);
	
	if(subindex == -1){ 
		if(arr[0] == target){ //target at 0th index
			return 0;
		}
		else{
			return -1;
		}
	}
	else{ 
		return subindex + 1;
	}
}
    