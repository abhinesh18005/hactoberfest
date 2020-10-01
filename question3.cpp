#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

	ll t;
	cin>>t;
	while(t>0){
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		int flag = 1;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]!=x){
				flag=0;
			}
		}
		if(flag==1){
			cout<<"0\n";
		}else{
			ll ans = 0;
			flag=0;
			for(ll i=0;i<n;i++){
				ans+=(x-arr[i]);
				if(arr[i]==x){
					flag=1;
				}
			}
			if(ans==0 || flag==1){
				cout<<"1\n";
			}else{
				cout<<"2\n";
			}
		}
	}
	return 0;
}	
