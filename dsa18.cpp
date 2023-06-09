#include<iostream>
using namespace std;

void increment(int x,int y){
	x++;
	y=y+2;
	cout<<x<<":"<<endl;
}
int main(){
	int a=10,b=20;
	increment(a,b);
	cout<<a<<":"<<b;
}
