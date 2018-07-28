#include<stdio.h>
#include<string.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int sum = a + b;
	char str[20];
	sprintf(str,"%d",sum);
	int idx = 0;
	if(sum<0){
        printf("-");
		idx = 1;
	}
	int len = strlen(str);
	int i;
	for(i=idx;i<len;i++){
		printf("%c",str[i]);
		int left=len-i-1;
		//剩下的个数是3的倍数的话，就要输出','。当然最后一位除外
		if(left%3==0 && i!=len-1)
			printf(",");
	}
	printf("\n");
	return 0;
}

