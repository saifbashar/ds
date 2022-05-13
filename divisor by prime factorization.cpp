#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a;
	int n;
	scanf("%d",&n);
	int status[n];
	memset(status,0,sizeof(status));
	for(int i=3;i*i<=n;i += 2){
		if(status[i] == 0){
			for(int j = i*i; j<=n ;j += i*2){
				status[j] = 1;
			}
		}
	}
	a.push_back(2);
	for(int i=3;i<=n; i+=2){
	if(status[i] == 0){
		a.push_back(i);
	}
	}
	

	
	
	int divCount = 1;
	for(int i=0;i<a.size();i++){
		if(n%a[i] == 0){
			int cnt = 1;
			while(n%a[i] == 0){
				n /= a[i];
				cnt++;
			}
			divCount *= cnt;
		}
	}
	
	cout<<divCount<<endl;
	return 0;
}


/*
	18 = 1 2 3 6 9 18
	2^0 * 3^0
	2^1 * 3^0
	2^0 * 3^1
	2^1 * 3^1
	
	
*/
