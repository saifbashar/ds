#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int gcd(int a,int b){
	int mn = min(a,b),mx = max(a,b);
	for(int i=mn;i>=0;i--){
		if(mx%i == 0 && mn%i == 0){
			return i;
		}
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
