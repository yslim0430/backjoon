#include <stdio.h> 

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	if (H >= 1) {
		if (M >= 45) {
			M = M - 45;
		}
		else if ((M >= 0) && (M < 45)) {
			M = 60 - (45 - M);
			H--;
		}
	}
	else if (H == 0) {
		if (M >= 45) {
			M = M - 45;
		}
		else if ((M >= 0) && (M < 45)) {
			M = 60 - (45 - M);
			H = 23;
		}
	}
	printf("%d %d\n", H, M);

	return 0;
}