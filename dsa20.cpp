#include<iostream>
using namespace std;

void func(int &x){
	x=50;
	cout<<"Value of x in func function : "<< x <<endl;

}
int main(){
	int x=10;
	func(x);
	cout<<"Value of x in main function :"<<x;
}
