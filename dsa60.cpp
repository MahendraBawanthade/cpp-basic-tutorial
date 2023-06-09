#include<iostream>
using namespace std;
class construct{
	public:
		float area;
		construct(){
			area =0;
		}
	construct(int a,int b){
		area=a*b;
	}
	void disp(){
		cout<<area<<endl;
	}	
};
int main(){
	construct o;
	construct o2(10,20);
	cout<<"Area using default constructor: ";
	o.disp();
	cout<<"Area using parameterized constructor: ";
	o2.disp();
	return 0;
}
