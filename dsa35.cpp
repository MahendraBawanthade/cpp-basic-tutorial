#include<iostream>
using namespace std;
int sum(int a,int b,int c=0){
	return a+b+c;
}
int main(){
	int a=2,b=3,c=4;
	cout<<sum(a,b)<<endl;
	cout<<sum(a,b,c);
	return 0;
}
