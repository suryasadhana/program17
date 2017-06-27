#include<stdio.h>
#include<conio.h>
int num,r,sum=0,temp;
printf("enter a no");
scanf("%d",&num);
temp=num;
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum==temp)
{
printf("%d",temp);
}
else
{
printf("not an armstrong %d",temp);
}
return 0;
getch();
}
