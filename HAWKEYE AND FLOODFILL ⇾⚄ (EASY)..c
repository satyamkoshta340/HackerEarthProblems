#include<stdio.h>
#include<stdlib.h>
unsigned int max(unsigned a, unsigned b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
	unsigned int n, i, j, x;
	long int power;
	scanf("%u",&n);
	scanf("%u %u %lu", &i, &j, &power);
	for(x =0 ; x < n ; x++){
		for(int y =0;y<n;y++){
			if(y == n-1){
				if( power - max(abs(x-i),abs(y-j)) >= 0 ){
					printf("%ld \n",power - max(abs(x-i),abs(y-j)));
				}
				else {
					printf("0\n");
				}
			}
			else{
			    if( power - max(abs(x-i),abs(y-j)) >= 0){
				    printf("%ld ",power - max(abs(x-i),abs(y-j)));
			    }
			    else{
				    printf("0 ");
			    }
			}
		}
	}
	return 0;
}