#include<iostream>
#include<cstring>
using namespace std;

string removeAllOccurencesOfChar(string input,char c){
	string output;
	for(int i=0;i<input.size();i++){
		if(input[i]!=c){
			output.push_back(input[i]);
		}
	}
return output;
}
int main(){
	string input;
	char c;
	cin>>input>>c;
	string output=removeAllOccurencesOfChar(input,c);
	cout<<output<<endl;
	return 0;
}
