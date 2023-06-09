#include<iostream>
using namespace std;

int main(){
	int arr[]={10,35,85,93,62,77,345,43,2,10};
	int n= 10;
	sort(arr,arr+n);
	cout<<"sorted array:"<<endl;
	for(int i=0; i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
