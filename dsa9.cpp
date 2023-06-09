#include<iostream>
using namespace std;
int main(){
	int age=19;
	if(age>=14)
	{
		if(age>=18)
		cout<<"you are an adult";
		else
		cout<<"you are a teenager";
	}
	else
	{
		if(age>0)
		cout<<"you are  a child";
		else
		cout<<"invalid age";
	}
	return 0;
}
