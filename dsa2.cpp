#include<stack>
using namespace std;

int main(){
	stack<int>marks;
	for(int i=0;i<=5;i++){
		marks.push(i);
	while(!marks.empty()){
		int x=marks.top();
		marks.pop();
		cout<<x<<" "<<endl;
			}
	}
	return 0;
}
