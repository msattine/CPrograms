#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	int n;
	int a;
	long long int sum = 0;
	scanf("%d", &n);
	int i;
	scanf("%d", &a);
	sum = a;
	for(i = 1; i < n; i++) {
		scanf("%d",&a);
		sum = (sum + (long long int)a + sum*(long long int)a) % (long long int)1000000007;
	}
	printf("%lld\n", sum);
    return 0;
}
