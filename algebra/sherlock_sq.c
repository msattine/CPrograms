#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long PowMod(unsigned long long n)
{
    unsigned long long ret = 1;
    unsigned long long a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % 1000000007;
        a = a * a % 1000000007;
        n >>= 1;
    }
    return ret;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	int t;
	scanf("%d", &t);
	unsigned long long int n;
	while(t--){
		scanf("%lld", &n);
		unsigned long long int sum;
		sum = (PowMod(n+(unsigned long long)1) + (unsigned long long)2) % (unsigned long long)1000000007;
		printf("%lld\n", sum);
	}
    return 0;
}
