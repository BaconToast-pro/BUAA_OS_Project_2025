#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	int a[10];
	int num = 0;
	while (n != 0) {
		a[num++] = n % 10;
		n /= 10;
	}

	int flag = 0;
	for (int i = 0; i < num / 2; i++) {
		if (a[i] != a[num - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (!flag) {
		printf("Y\n");
	} else {
		printf("N\n");
	}
	return 0;
}
