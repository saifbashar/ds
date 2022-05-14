#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int gcd(int a,int b){
	return (b==0)?a:gcd(b,a%b);
}
int lcm(int a,int b){
	return (a/gcd(a,b))*b;
}

// a*b = gcd(a,b) * lcm(a,b)
int main(){
	int a,b;
	cin>>a>>b;
	cout<<lcm(a,b)<<endl;
	return 0;
}


/*
	lcm => least common multiple
	3 => 3 6 9 12 15 18 .......
	5 => 5 10 15 20 25 .......
	least means small,
	small common multiple is 15
	so the result is 15
*/
