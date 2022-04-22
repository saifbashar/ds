#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(auto &x:a){
    cin>>x;
  }
  // bubble sort
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
      }
    }
  }
  for(auto x:a){
    cout<<x<<" ";
  }
  return 0;
}
