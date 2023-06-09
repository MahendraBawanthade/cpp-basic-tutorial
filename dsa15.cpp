#include <iostream>
using namespace std;

int main() {
    //Write your code here
int x,n;
    cin>>x>>n;
    int ans=1;
    while(n>0){
      ans*=x;
       n--;
    }
    cout<<ans;
    return 0;
} 
