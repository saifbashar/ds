#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
int lcm(int a,int b){
	for(int i=1;;i++){
		if(i%a == 0 && i%b == 0){
			return i;
		}
	}
}
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
