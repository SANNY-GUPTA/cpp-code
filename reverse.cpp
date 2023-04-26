#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rev=0;
	while(n>0){
		int lastdigit;
		lastdigit=n%10;
		rev=rev*10+lastdigit;
		n=n/10;
//		cout<<rev<<endl;int rev=0;
	}
	cout<<rev<<endl;
	return 0;
}
