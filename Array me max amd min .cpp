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
	int max_no=INT_MIN;
	int min_no=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>max_no){
			max_no=arr[i];
		}
		if(arr[i]<min_no){
			min_no=arr[i];
		}
		
	}
	cout<<max_no<<"  "<<endl<<min_no<<endl;
	
	return 0;
}

