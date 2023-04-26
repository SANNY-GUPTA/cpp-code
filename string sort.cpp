#include<iostream>
//#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	cout<<s<<endl;
	
	int n;
	cin>>n;
	int sum=0;
	int original=n;
	while(n>0){
		int lastdigit=n%10;
		sum=sum+pow(lastdigit,3);
		n=n/10;
	}
	if(sum==original){
		cout<<"it`s armstroh"<<endl;
	}
	else{
		cout<<"not armstroog";
	}
	
	return 0;
}

