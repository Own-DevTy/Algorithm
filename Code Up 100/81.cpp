#include<iostream>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int fDice = 1; fDice <= n; fDice++) for(int sDice = 1; sDice <= m; sDice++) printf("%d %d\n", fDice, sDice);
	
	return 0;
}
