#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	int t;
	long long int n;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &n);
		//summation (2n - 1) = n^2;
		long long int sum;
		sum = n*n % (long long int)1000000007;
		printf("%lld\n", sum);
	}
    return 0;
}
