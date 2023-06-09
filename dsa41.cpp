#include<iostream>
using namespace std;

int main(){
	int n;
	int m;
	int array1[n];
	int array2[m];
	int result=0;
	
	for(int i=0;i<n;i++){
		cin>>array1[i];
	}
	for(int i=0;i<m;i++){
		cin>>array2[i];
	}
	for(int i=0; i<n;i++){
		result+= array1[i];
	}
	for(int i=0; i<m;i++){
		result+=array2[i];
	}
	cout<<result;
	return 0;
}
