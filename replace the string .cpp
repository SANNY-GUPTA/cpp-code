#include<iostream>
using namespace std;
void replace(string s){
	if(s.length()==0){
		return;
	}
	if(s[0]=='n'){
		cout<<"pagal";
		replace(s.substr(1));
	}

	else{
		cout<<s[0];
		replace(s.substr(1));
	}
}
int main()
{
	replace("sannynnynnishfijfoiwnndtgngdgdn");
	return 0;
}
