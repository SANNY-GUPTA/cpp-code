#include<iostream>
#include<cmath>
#include<math.h>
//#include<climit>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int original=n;
	while(n>0){
		int lastdigit;
		lastdigit=n%10;
		sum=sum+pow(lastdigit,3);
		n/=10;
		
	}
	if(sum==original){
		cout<<"aramstrong value"<<endl;
	}
	else{
		cout<<"not armstrong value"<<endl;
	}
	return 0;
}
