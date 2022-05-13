#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<limits.h>
#include<stdbool.h>

int main(){
	int n;
	scanf("%d",&n);
	int prime[n];
	for(int i=3;i*i<=n;i +=2){
		if(prime[i] == 0){
			for(int j = i*i;j<=n;j += 2*i){
				prime[j] = 1;
			}
		}
	}
	printf("2\n");
	for(int i=3;i<=n;i+=2){
		if(prime[i] == 0){
			printf("%d\n",i);
		}
	}
	return 0;
	
}
