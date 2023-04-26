#include<iostream>
#include<cmath>
using namespace std;

void reverse(string s){
	for(int i=s.length()-1;i>=0;i--){
		cout<<s[i];
	}
}
int main(){
	string s="sanny";
//	cin>>s;
	reverse(s);
	return 0;
}  
