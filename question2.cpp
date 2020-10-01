#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

	int t;
	cin>>t;
	while(t--){
		int N,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(k==1){
			int flag = 0;
			for(int i=1;i<n;i++){
				if(a[i]!=a[i-1]){
					flag = 1;
				}
			}
			if(flag==0){
				cout<<"1\n";
			}else{
				cout<<"-1\n";
			}
		}else{
			int count = 0;
			while(true){
				int limit = 0;
				int pre = 0;
				for(int i=0;i<n;i++){
					if(i==0){
						limit++;
						pre = a[i];
						a[i] = 0;
					}else{
						if(a[i]==pre){
							a[i]=0;
						}else{
							if(limit+1<=k){
								limit++;
								pre = a[i];
								a[i] = 0;
							}else{
								a[i] = a[i]-pre;
							}
						}
					}
				}
				int s = 0;
				for(int i=0;i<n;i++){
					s+=a[i];
					//cout<<a[i]<<" ";
				}
				//cout<<"\n";
				count++;
				if(s==0){
					break;
				}
				
			}
			cout<<count<<"\n";
		}
		cout<<This is a cpp programs<<endl;

	}
	return 0;
}	
