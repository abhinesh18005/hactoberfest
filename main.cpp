#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string countAndSay(int A) {
    string ans = "1";
    while(A>1){
        string s2 = "";
        char pre = ans[0];
        int c = 0;
        int n = ans.length();
        for(int i=1;i<n;i++){
            if(ans[i]==ans[i-1]){
                c++;
            }else{
                s2+=to_string(c)+to_String(pre);
                pre = ans[i];
            }
        }
        s2+=to_string(c)+to_String(pre);
        ans = s2;
        A--;
    }
    return ans;
}

int main() {
	string str  = "A man, a plan, a canal: Panama";
	string ans = "";
	for(char i:str){
		if(  (i>='a' && i<='z') || (i>='A' && i<='Z')   ){
			ans+=i;
		}
	}
	transform(ans.begin(),ans.end(),ans.begin(),::tolower);
	cout<<ans<<"\n";
	
	return 0;
}	