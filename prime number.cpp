#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"not prime";
			flag=1;
			break;
		}
	} 
	if(flag==0){
		cout<<"it`s prime";
	}
	return 0;
}
