#include<iostream>
using namespace std;
//void ascending(int n){
//	for(int i=1;i<=n;i++){
//		cout<<i<<endl;
//	}
//	
//	
//}



//ye tarika se recursion use karte hua ascending order me digit ko print kara sakte hai 
void ascending(int n){
	if(n==0){
		return;
	}
	ascending(n-1);
	cout<<n<<endl;
}



void dec(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	dec(n-1);
	
}
int main(){
	int n;
	cin>>n;
	ascending(n);
	dec(n);
	return 0;
}
