#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n <= 2) printf("-1\n");
        else printf("%d\n", (n-2)%4 == 0 ? 4 : ((n-2)%2 == 0 ? 3 : 2));
    }
    return 0;
}
