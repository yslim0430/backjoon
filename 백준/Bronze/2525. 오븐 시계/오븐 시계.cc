#include <stdio.h> 

int main() {
	int H, M;
	int time;
	scanf("%d %d", &H, &M);
	scanf("%d", &time);

	M = M + time;
	if ((M >= 0) && (M < 60)) {
		printf("%d %d\n", H, M);
	}
	else if (M >= 60) {
		H = H + (M / 60);
		M = M % 60;
		if (H >= 24) {
			H = H - 24;
		}
		printf("%d %d\n", H, M);
	}

	return 0;
}