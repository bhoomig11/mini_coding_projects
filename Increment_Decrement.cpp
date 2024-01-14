#include <bits/stdc++.h>
using namespace std;

void dec(int num){ //goes from highest to lowest
	if(num == 0){ //base case
		return;	
	}
	cout << num << " "; //number will be printed first
	dec(num -1); //then number reduced 
}

void inv(int num){ //goes from lowest to highest
	if(num == 0){
		return;	
	}
	inc(num - 1); //number is reduced till base case
	cout << num << " "; //then reduced number is printed
}

void printIncDec(int num){ //calling the above functions
	dec(num);
	cout << endl;
	inc(num);	
}