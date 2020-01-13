
--------------------------------------------------------------------------------
# include <stdio.h>
int main ()
{
	int i, j;
	char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
	printf("a: %p, *a: %p, a[0][1]: %c\n", a, *a, *(*(a+0)+1));
	char b[3][2];
	printf("b: %p, *b: %p, &b: %p\n", b, *b, &b);
	printf("b+1: %p, *b+1: %p, &b+1: %p\n", b+1, *b+1, &b+1);
	//char *p = *b;  // Valid
	char *p = (char *)b;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			*(p + 2*j + i) = a[i][j];
		}
	}
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Output:
a: 0x7ffe2e0a9930, *a: 0x7ffe2e0a9930, a[0][1]: b
b: 0x7ffe2e0a9940, *b: 0x7ffe2e0a9940, &b: 0x7ffe2e0a9940
b+1: 0x7ffe2e0a9942, *b+1: 0x7ffe2e0a9941, &b+1: 0x7ffe2e0a9946

Ref:
  - https://www.geeksforgeeks.org/gate-gate-it-2008-question-50/
--------------------------------------------------------------------------------

