#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	queue<string>tasks;
	string s;
	cout<<"enter the number of tasks to store"<<endl;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,s);
		tasks.push(s);
	}
	int j=1;
	while(tasks.empty()==false){
		cout<<j<<"."<<tasks.front()<<endl;
		j++;
		tasks.pop();
	}
}

