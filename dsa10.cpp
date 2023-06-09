#include<iostream>
using namespace std;
int main(){
	int num=1;
	print:
		cout<<num<<"";
		num++;
		if(num<=5)
		   goto print;
		   return 0;
}
