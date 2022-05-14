#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int gcd(int a,int b){
	return (b==0)?a:gcd(b,a%b);
}
int lcm(int a,int b){
	return (a/gcd(a,b))*b;
}
int main(){
	int n;
	cin>>n;
	// first we have to preload all prime number
	vector<bool> flag(n,false);
	prime.push_back(2);
	for(int i=3;i*i<=n;i+=2){
		if(!flag[i]){
			for(int j=i*i;j<=n;j+=2*i){
				flag[j] = true;
			}
		}
	}
	for(int i=3;i<=n;i +=2){
		if(!flag[i]){
			prime.push_back(i);
		}
	}
	
	// Euler's totient function
	int st = n;
	for(int i=0;i<=prime.size();i++){
		if(n%prime[i] == 0){
			st -= st/prime[i];			 
		}
	}
	cout<<st<<endl;
	return 0;
}

