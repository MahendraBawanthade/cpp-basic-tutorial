#include<iostream>
using namespace std;
 
int main(){
	void *ptr;
	int i =10;
	ptr =& i;
	cout<<"Address of variable i"<<&i<<endl;
	cout<<"Address where the void pointer is pointing"<<ptr<<endl;
	return 0;
		
}
