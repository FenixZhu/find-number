#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n1=0, n2=0;
	int *ns1, *ns2;
	int i = 0;
	int j = 0, dif = 0, max = 0;
	//声明部分到此结束
	scanf("%d", &n1);
	ns1 = (int *)malloc(n1+1);//为什么要加1？
	for (; &ns1[i]< ns1+n1; i++)
		scanf("%d", &ns1[i]);
	scanf("%d", &n2);
	ns2 = (int *)malloc(n2+1);
	for (i = 0; &ns2[i]<ns2+n2; i++)
		scanf("%d", &ns2[i]);
	//读取部分到此结束
	for (i = 0; &ns2[i]<ns2 + n2&&n2-n1>=max; i++)
	{
		while (ns2[i] == ns1[j])
		{
			dif ++;
			if (j < n1&&i<n2)
			{
				i++;
				j++;
			}
			else
				break;
		}
		if (dif > max)
			max = dif;
		dif = 0;
		i -= j;
		j = 0;

	}
	printf("%d", max);

	free(ns1);
	free(ns2);
	
	return 0;
}
