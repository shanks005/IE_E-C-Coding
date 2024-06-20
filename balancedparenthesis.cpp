#include<bits/stdc++.h>
using namespace std;

bool matching(char a,char b){
	return((a=='{' && b=='}')||(a=='['&& b==']')||(a=='('&&b==')'));
}

bool balanced(string s){
	stack <char>st;
	for(char x:s){
		if(x=='{'||x=='['||x=='('){
			st.push(x);
		}
		else{
			if(st.empty()){
				return true;
			}
			else if(matching(st.top(),x)==true){
				st.pop();
			}
			else if(matching(st.top(),x)==false){
				return false;
			}
		}
	}
	return(st.empty()==true);
}

int main(){
	string s="((())";
	cout<<balanced(s);
	return 0;
}

