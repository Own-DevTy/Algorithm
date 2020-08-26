#include<iostream>

int main(){
	int red, gre, blu;
	scanf("%d %d %d", &red, &gre, &blu);
	
	for(int r = 0; r < red; r++)
		for(int g = 0; g < gre; g++)
			for(int b = 0; b < blu; b++)
				printf("%d %d %d\n", r, g, b);
	
	printf("%d", red*gre*blu);
	
	return 0;
}
