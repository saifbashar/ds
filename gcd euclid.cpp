#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int gcd(int a,int b){
	int mn = min(a,b),mx = max(a,b);
	if(mx%mn==0){
		return mn;
	}
	else{
		int r = mx%mn;
		return gcd(mn,r);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	return 0;
}


/*
	18 = 1 2 3 6 9 18
	2^0 * 3^0
	2^1 * 3^0
	2^0 * 3^1
	2^1 * 3^1
	
	
*/
