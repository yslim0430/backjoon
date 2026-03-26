#include <stdio.h> 

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int prize;

	if (a == b) {
		if (a == c) 
			prize = 10000 + (a * 1000);
		else if (a != c) 
			prize = 1000 + (a * 100);
	}
	else if (a != b) {
		if ((a == c) || (b == c)) 
			prize = 1000 + (c * 100);
		else {
			if (a > b) {
				if (a > c) 
					prize = a * 100;
				else prize = c * 100;
			}
			else {
				if (b > c)
					prize = b * 100;
				else prize = c * 100;
			}
		}
	}
	printf("%d", prize);

	return 0;
}