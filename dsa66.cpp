#include<iostream>
using namespace std;

class A{
	float d;
	public:
		int a;
		void modify(int i){
			a=i;
		}
		void getA(){
			cout<<a;
		}
};
class B: public A{
	int a=15;
	public:
		void print(){
			cout<<a;
		}
};
int main(){
	B b;
	b.modify(10);
	b.print();
	b.getA();
	return 0;
}
