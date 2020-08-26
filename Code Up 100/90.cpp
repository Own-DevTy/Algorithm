#include<iostream>

int main(){
	int a, r, n, count = 0;
	scanf("%d %d %d", &a, &r, &n);
	
	for(long long i = a; ; i *= r){
		count++;
		if(count == n){
			printf("%lld", i);
			break;
		}	
	}
	return 0;
}
