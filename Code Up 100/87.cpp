#include<iostream>

int main(){
	int n, sum = 0, index = 0;
	scanf("%d", &n);
	
	while(sum < n)
		sum += ++index;
		
	printf("%d", sum);
	return 0;
}
