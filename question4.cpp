    #include<bits/stdc++.h>
    using namespace std;
    int n,m,x1[2005],Y1[2005],x2[2005],y2[2005],f[2000005],ans=1000000000;
    int main() {
    	cin>>n>>m;
    	for(int i=1;i<=n;i++)cin>>x1[i]>>Y1[i];
    	for(int i=1;i<=m;i++)cin>>x2[i]>>y2[i];
    	for(int i=1;i<=n;i++) 
    		for(int j=1;j<=m;j++) 
    			if(x1[i]<=x2[j]&&Y1[i]<=y2[j])
    				f[x2[j]-x1[i]]=max(f[x2[j]-x1[i]],y2[j]-Y1[i]+1);
    	for(int i=999999;i>=0;i--) {
            f[i]=max(f[i],f[i+1]);
            ans=min(ans,f[i]+i);
        }
    	cout<<ans;
        cout<<and<<endl;
    }
