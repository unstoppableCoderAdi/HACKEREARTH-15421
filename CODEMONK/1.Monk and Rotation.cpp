#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(){
	int n,k;
	cin>>n>>k;
	k=k%n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int i=0;i<n;++i) cout<<arr[(i+(n-k))%n]<<" ";

}

signed main(){
	fast();
	int tc;cin>>tc;
	while(tc--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
