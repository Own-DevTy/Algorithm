#include<iostream>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	for(int day = 1; ; day++) if(day % a == 0 && day % b == 0 && day % c == 0){ printf("%d", day); break;}
	
	return 0;
}
