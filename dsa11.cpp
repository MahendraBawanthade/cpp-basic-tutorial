#include<iostream>
using namespace std;

int SUM(int a,int b){
	int s1=a+b;
	return s1;
}
void Print(int s2){
	cout<<"the sum is"<<s2;
	return;
}
int main(){
	int n1=10;
	int n2=20;
	int summ=SUM(n1,n2);
	Print(summ);
	return 0;
}
