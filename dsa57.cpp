#include<iostream>
using namespace std;

class Student{
	int rollno;
	char name[20];
	float marks;
	char grade;
	
	public:
		int getrollno(){
			return rollno;
		}
		int getmarks(){
			return marks;
		}
		void setgrade(){
			if(marks >90) grade='A';
			else if(marks>80) grade= 'B';
			else if(marks >70) grade ='C';
			else if(marks >60) grade ='D';
			else grade='E';
		}
	
};

