#include <stdio.h>

#define NMAX 100

static void bubble_sort(int n, int v[])
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < n - i - 1; ++j)
			if (v[j] > v[j + 1]) {
				int tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;
			}
}

int main(void)
{
	int n, v[NMAX];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &v[i]);
	bubble_sort(n, v);
	for (int i = 0; i < n; ++i)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}
