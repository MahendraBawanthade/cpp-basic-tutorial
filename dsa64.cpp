#include<iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"eating "<<endl;
		}
};
class dog: public Animal{
	public: void bark(){
		cout<<"barking";
 }
};
int main(){
	dog obj;
	obj.eat();
	obj.bark();
	return 0;
}
