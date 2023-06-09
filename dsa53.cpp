#include<iostream>
#include<cstring>
using namespace std;

string removeConsecutiveDuplicates(string input){
	int n=input.size();
	if(n==0){
		return input;
	}
	string answer;
	answer+=(input[0]);
	int i=1;
	while(i<n){
		if(input[i]!=input[i-1]){
			answer+=(input[i]);
		}
		i+=1;
	}
	return answer;
}
int main(){
	string str;
	cin>>str;
	string ans= removeConsecutiveDuplicates(str);
	cout<<ans<<endl;

}
