#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll arr2[n];
	ll left = 0;
	ll right = n-1;
	ll index  =0;
	while(left<=right && index<n){
		arr2[index] = arr[right];
		right--;
		index++;
		if(index<n){
			arr2[index] = arr[left];
			left++;
			index++;
		}
	}
	ll count = 0;
	for(int i=1;i<=n-2;i++){
		if(arr2[i]<arr2[i-1] && arr2[i]<arr2[i+1]){
			count--;
		}
	}
	cout<<count<<"\n";
	for(int i=0;i<n-1;i++){
		cout<<arr2[i]<<" ";
	}
	cout<<arr2[n-1]<<"\n";
	return 0;
}	
