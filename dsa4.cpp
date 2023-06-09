#include <iostream>
using namespace std;

int main() {
int principal,time ,si;
double rate;
cout<<"Enter principal amount"<<endl;
cin>>principal;
cout<<"Enter time period"<<endl;
cin>>time;
cout<<"Enter rate of interest"<<endl;
cin>>rate;

si=(principal*rate*time)/100;
cout<<"Simple Interest:"<<si<<endl;

    return 0;
}
