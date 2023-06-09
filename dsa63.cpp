#include<iostream>
using namespace std;

class box{
	private:
		int length;
		int breadth;
		int height;
	public:
		void set_values(int a,int b,int c){
			length =a;
			breadth=b;
			height=c;
		}
		void show_data(){
			cout<<"Length= "<<length<<endl
			    <<"Breadth="<<breadth<<endl
			    <<"Height="<<height<<endl;
			     
		}
};
int main(){
	box B1,B3;
	
	B1.set_values(5,10,15);
	B1.show_data();
	
	box B2=B1;
	B2.show_data();
	
	B3=B1;
	B3.show_data();
	return 0;
}
