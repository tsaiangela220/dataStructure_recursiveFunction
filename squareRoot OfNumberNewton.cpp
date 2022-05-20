#include <stdio.h>
#include <stdlib.h>
double squareRoot(double n, double ans, double tol);
int main()
{
	double n;

	while(scanf("%lf", &n)!=EOF){
		printf("ans: %.2lf\n", squareRoot(n, 1, 0.01));
	}

	return 0;
}
double squareRoot(double n, double ans, double tol)
{
	double g;
	g = ans*ans-n;
	if(g < 0) g = -g;
	
	if(g <= tol) return ans;
	else{
		//printf("n:%lf ans:%lf tol:%lf\n", n, (ans*ans+n)/(2*ans), tol);//
		return squareRoot(n, (ans*ans+n)/(2*ans), tol);
	}
}
