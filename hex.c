#include<stdio.h>
#include<math.h>
void main()
{
int a[100][4], r,i,j,sum=0;
printf("enter rows r\n");
scanf("%d",&r);
printf("enter values\n");
for(i=0;i<r;i++)
{
 for(j=0;j<4;j++)
 {
 scanf("%d",&a[i][j]);
 }
}

for(i=0;i<r;i++)
 for(j=0;j<4;j++)
 sum=sum+(a[i][j]*pow(2,3-j));
 if(sum<10)
 printf("%d",sum);
 else
 sum=sum+55;
 printf("%c",sum);
}
