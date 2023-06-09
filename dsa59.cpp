#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		public:
			void setValue(string a,int b){
				name =a;
				age= b;
			}
	void getValue(){
		cout<<"the name of the person is"<<name<<"and the age is"<<age<<" . ";
		
}		
};
int main(){
	Person obj;
	string name;
	int age;
	cin>>name>>age;
	obj.setValue(name,age);
	obj.getValue();
	return 0;
}
