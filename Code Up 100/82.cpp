#include<iostream>

int main(){
	int Hex;
	scanf("%X", &Hex);
	
	for(int i = 1; i < 16; i++)
		printf("%X*%X=%X\n", Hex, i, Hex * i);

	return 0;
}
