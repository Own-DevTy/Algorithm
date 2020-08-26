#include<iostream>

int main(){
	int h, b, c, s; double res;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	
	res = (double)h * b * c * s / 8 / 1024 / 1024;
	
	printf("%.1lf MB", res);
	
	return 0;
}
