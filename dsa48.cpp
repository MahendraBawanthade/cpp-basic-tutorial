#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char str1[50]="mahendra";
	char str2[50]="bawanthade";
	cout<<"concatenated string:"<<endl;
	strcat(str1,str2);
	cout<<str1;
	return 0;
}
