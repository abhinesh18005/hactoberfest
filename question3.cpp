#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		double l;
		cin>>n>>l;
		double a[n+2];
		a[0] = (double)0;
		a[n+1] = l; 
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		ll left_s = 1;
		ll right_s = 1;
		ll left = 1;
		ll right = n;
		double left_c = (double)0;
		double right_c = l;
		double left_t = (double)0;
		double right_t = (double)0;
		while(left<=right+1){
			//cout<<left_t<<" start\n";
			if(left==right+1){
				//cout<<right_c<<" hhhhh "<<left_c<<"\n";
				left_t+=(right_c-left_c)/(left_s+right_s);
				left+=1.0;
			}else{
				double dis1 = a[left]-left_c;
				double dis2 = right_c-a[right];
				double t1 = dis1/left_s;
				double t2 = dis2/right_s;
				if(left_t+t1==right_t+t2){
					right_t+=t2;
					right_c = a[right];
					right--;
					right_s+=1.0;
					left_t+=t1;
					left_c = a[left];
					left++;
					left_s+=1.0;
				}
				else if(left_t+t1>right_t+t2){
					right_t+=t2;
					right_c = a[right];
					right--;
					right_s+=1.0;
					left_t+=t2;
					left_c+=t2*left_s;

				}else{
					left_t+=t1;
					left_c = a[left];
					left++;
					left_s+=1.0;
					right_t+=t1;
					right_c-=t1*right_s;
				}
			}
			//cout<<left<<" "<<right<<" "<<left_t<<" end\n";
		}
		cout<<left_t<<"\n";
	}
	return 0;
}	
