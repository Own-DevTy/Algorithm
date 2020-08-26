#include<iostream>

int main(){
	int w, h, b; float res;
	scanf("%d %d %d", &w, &h, &b);
	
	res = (double)w * h * b / 8 / 1024 / 1024;
	
	printf("%.2lf MB", res);
	
	return 0;
}
