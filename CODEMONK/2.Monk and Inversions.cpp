#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int a[21][21];
int n;

inline int util(const int &x,const int &y){
	int cnt=0;
	for(int i=0;i<=x;++i){
		for(int j=0;j<=y;++j){
			if(i==x && j==y) continue;
			if(a[i][j]>a[x][y]) ++cnt;
		}
	}
	return cnt;
}

void solve(){

	int ans=0;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			ans += util(i,j);
		}
	}
	cout<<ans;
}

signed main(){fast();
	int tc;cin>>tc;
	while(tc--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
