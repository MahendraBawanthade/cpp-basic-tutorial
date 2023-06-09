#include<iostream>
using namespace std;
int main(){
	int row,col;
	rand();
	
	cout<<"Enter the number of rows"<<endl;
	cin>>row;
	cout<<"Enter the number of columns"<<endl;
	cin>>col;
	
	int *Arr= new int[row*col];
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
	*(Arr + i * col +j)=rand() % 100;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cout<<*(Arr + i *col +j)<<" ";
		cout<<endl;
	}
	delete[]Arr;
	return 0;
}
