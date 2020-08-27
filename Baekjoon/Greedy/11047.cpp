#include<iostream>

int main(){
	int N, K, C = 0;
	scanf("%d %d", &N, &K);
	
	int arr[N] = { 0, };
	
	for(int i = N - 1; i > -1; i--) scanf("%d", &arr[i]);	
	
	for(int i = 0; i < N; i++){
		if(arr[i] > K) continue;
		C += K / arr[i];
		K %= arr[i];
	}
	
	printf("%d", C);
	return 0;
}
