#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n+1];
	cin>>arr[n+1];
	bool check=true;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			check=false;
            cout<<"not palin";
			break;
		}
		else
		{
		    cout<<"not palindrome";
	    }
	}
//	if(check==true){
//		cout<<"palindrome";
//	}
	
	return 0;
}

