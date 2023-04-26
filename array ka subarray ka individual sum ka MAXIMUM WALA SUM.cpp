#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int curr=0;
	int maxno=INT_MIN;
	for(int i=0;i<n;i++){
		curr=0;
		for(int j=i;j<n;j++){
			curr=curr+arr[j];	
			maxno=max(maxno,curr);
		}	
	}cout<<maxno<<endl;
	return 0;
}

