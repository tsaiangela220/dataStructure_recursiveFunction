#include <stdio.h>
#include <stdlib.h>
int C(int n, int k);
int main()
{
	int n, k;
	while(scanf("%d %d", &n, &k)!=EOF){
		printf("ans: %d\n", C(n, k));
	}

	return 0;
}
int C(int n, int k)
{
	if(k==0 || n==k) return 1;
	else if(n>k && k>0)return C(n-1, k) + C(n-1, k-1);
}
