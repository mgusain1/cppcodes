#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<"1";
		return 0;
	}
	int mx = -1;
	int ans = 0;
	for(int i=0;i<n-1;i++){
		if(a[i]>mx&&a[i]>a[i+1]){
			ans++;
		}
		mx = max(ans,mx);
	}
	cout<<ans<<" ";
	return 0;
}
