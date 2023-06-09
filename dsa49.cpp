#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[50]="mahendra";
	char str2[50]="bawanthade";
	int res1=strcmp(str1,str2);
	int res2=strcmp(str2,str1);
	cout<<res1<<endl;
	cout<<res2<<endl;
	
	return 0;
}
