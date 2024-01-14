#include <iostream>
using namespace std;

bool comparePassword(char* password, char * expected_password){
	//iterating over the entered password and match with the correct one
	while(password[idx] != '\0'){
		if(password[idx] != expected_password[idx]){
			return false;
		}
	idx++;
	}
	return true;
}


int main(){
	//a pointer that points to the correct password
	char *expected_password = "pass1010"; //stored in a read-only memory
	char password[100]; //array stored in stack (can be updated)
	cin >> password;
	
	if(comparePassword(password,expected_password)){
		cout << "Login Successful" << endl;
	}
	else{
		cout << "Try Again";
	}
	return 0;
}
