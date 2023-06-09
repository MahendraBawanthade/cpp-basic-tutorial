#include<iostream>
using namespace std;

int main(){
	char *ptr;
	char Str[]="abcdefg";
	ptr=Str;
	ptr+=2;
	cout<<ptr;
	return 0;
}
