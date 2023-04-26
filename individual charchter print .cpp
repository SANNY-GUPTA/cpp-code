#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<endl;
	}
	
	
//	yaha par index ko v ekh sakte hai
	string k;
	getline(cin,k);
	cout<<k[2];
	
	
	
//	yaha par integer to string hai
//	int x=654;
//	cout<<to_strinig(x)<<endl;
//	
	
	
//	yaha par string to integer hai
//	string a;
//	getline(cin,a);
//	int x=stoi(a);
//	cout<<x<<endl;
	return 0;
}
