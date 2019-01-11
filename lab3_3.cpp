#include <iostream>
using namespace std;

int main(){

    double x ,stack , y ;
    x = 6;
    while(x<20){
    	
	y= 1/x;
	stack =stack+y;
	x = x+1;
	
    }
    cout << "summation is : " << stack<< "\n";
    return 0;
}