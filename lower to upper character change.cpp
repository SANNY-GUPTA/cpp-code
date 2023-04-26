#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
//	cin>>s; cin lekhne se space ke bad wala character print nahi karta hai
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	string k;
	getline(cin,k);
	transform(k.begin(),k.end(),k.begin(),::tolower);
	cout<<k<<endl;
	
	
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(str[i]>='a' && str[i]<='z')
		str[i]-=32;
	}
	cout<<str<<endl;
	
	string lower;
	getline(cin,lower);
	for(int i=0;i<lower.size();i++){
		if(lower[i]>='A' && lower[i]<='z')
		lower[i]+=32;
	}
	cout<<lower<<endl;
	
	return 0;
}
