#include<stdio.h>
int i,j,w,zongren;
int a[50],b[50];
int shuzujishu(int a[]);
	main(void)
{
	printf("缺勤统计\n请输入总人数\n");
	scanf("%d",&zongren);
	printf("依次输入已签到学号\n");
	for(i=0;i>=0;i++)
		{scanf("%d",&j);
	if(j==0)
		break;
	else 
		a[i]=j;}
	for(i=0;i<zongren;i++)
		b[i]=i+1;
	j=shuzujishu(a);
	for(i=0;i<zongren;i++)
		for(w=0;w<=j;w++)
			{if(a[w]==b[i])
				b[i]=0;}
		for(i=0;i<zongren;i++)
			if (b[i]!=0)
				printf("%d\n",b[i]);
}
int shuzujishu(int a[])
	{
		int i,j;
		for(i=0,j=0;a[i]!=0;i++)
			j++;
		return j;
}