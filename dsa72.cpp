#include<iostream>
using namespace std;

int main(){
	try{
		int age=12;
		if (age>=18){
			cout<<"you are eligible to vote";
		}
		else
		{
			throw(age);
		}
	}
catch(int age)
{
	cout<<"sorry,you are not eligible to vote"<<endl;
	cout<<"your age is: "<<age;
}
}
