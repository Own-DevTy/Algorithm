#include<iostream>

int main(){
	int a, m, d, n, count = 0;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	
	for(long long i = a; ; i = i * m + d){
		count++;
		if(count == n){
			printf("%lld", i);
			break;
		}	
	}
	return 0;
}
