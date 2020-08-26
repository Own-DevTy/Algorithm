#include<iostream>

int main(){
	int n, sum = 0, count = 0;
	scanf("%d", &n);
	while(sum < n){
		count++;
		sum += count;
	} 
	
	printf("%d", count);
	return 0;
}
