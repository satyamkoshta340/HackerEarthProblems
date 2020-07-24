#include<stdio.h>
int main()
{
	unsigned int first,last,queries;
	short type;
	long unsigned len,i;
	scanf("%ld %d",&len,&queries);
	unsigned int numbers[len];
	for(i=0;i<len;i++){
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<queries;i++){
		scanf("%hd %u %u",&type,&first,&last);
		if(type == 1){
			numbers[first] = last;
		}else{
			if(last < sizeof(numbers)/sizeof(numbers[0])){  
				long unsigned sum=0;
				for(int j=first;j<=last;j++){
					sum += numbers[j];
				}
				printf("%lu \n",sum);
			}else{
				printf("-1\n");
			}
		}
	}
	return 0;
}