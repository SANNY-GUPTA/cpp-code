#include<iostream>
using namespace std;

string removelast(string s){
	if(s.length()==0){
		return "";
	}
	char ch=s[0];
	string ans=removelast(s.substr(1));
	if(ch=='n'){
		return ans+ch;
	}
	return ch+ans;
	
}
int main(){
	cout<<removelast("sannysannynnysbhuhdewnbdyudwey");
//	cout<<removelast;
	return 0;
}
