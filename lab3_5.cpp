#include <iostream>
using namespace std;

int main(){

	string x , y ;
	int n, count;
	count = 0;
	cout << "Enter first text: ";
	cin >> x;
	cout << "\n";
	cout << "Enter second text: ";
	cin >> y;
	cout << "\n";
	cout << "Enter N";
	cin >>n;
	while(count<n){
		if(count%2==0){
			count = count+1;
		cout << x <<" ";
		}
		else{
			count = count+1;
			cout << y <<" ";
		}
		
		
	}
		
	
	
    return 0;
}