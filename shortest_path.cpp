#include <iostream>
#include <ccytpe>
using namespace std;

//target location (X,Y)
//starting location (0,0)
//a longer path is given in the form of directions consisting
//of North, South, West and East in a cartesian (X,Y) plot 
// (3,2) would result in EEENN

int main(){
	
	char ch = cin.get();
	while(ch!='\n'){
		//decide an action based on the letter N,W,E,S
		switch(ch){
			case 'N': y++; break;
			case 'S': y--; break;
			case 'E': x++; break;
			case 'W': x--; break;
		}
		
		ch = cin.get();
	}
	//final displacement
	cout <<"X: "<<x <<"Y: "<<y <<endl;
	
	//4 cases for 4 Quadrants
	// First case - First Quudrant
	if(x>=0 && y>=0){
		//NorthEast
		for(int cnt=1; cnt<=x; cnt++){
			cout << "E";
		}
		//North
		for(int cnt=1; cnt<=y; cnt++){
			cout<<"N";
		}
		}
	// Second case - Second Quadrant	
	else if(x<=0 && y>=0){
		//NorthWest
		for(int cnt=1; cnt<=x; cnt++){
			cout<<"W"
		}	
		//North
		for(int cnt=1; cnt<=y; cnt++){
			cout<<"N";
		}
		}		
	// Third case - Third Quadrant	
	else if(x<=0 && y<=0){
		//SouthWest
		for(int cnt=1; cnt<=x; cnt++){
			cout<<"W"
		}	
		//South
		for(int cnt=1; cnt<=y; cnt++){
			cout<<"S";
		}
		}
	// Fourth case - Fourth Quadrant
	else if(x>=0 && y<=0){
		//SouthWest
		for(int cnt=1; cnt<=x; cnt++){
			cout<<"E"}	
		//South
		for(int cnt=1; cnt<=y; cnt++){
			cout<<"S";
		}
		}					

	
	return 0;
}


