#include<stdio.h>
#include<string.h>
void main()
{
 char s[50];
 int count=1,i,j,l;
 printf("enter string\n");
 scanf("%s" ,s);
 l=strlen(s);
 for (i=0;i<l;i++)
 for(j=i+1;j<l;j++)
 {
  if(s[i]==s[j])
  {
  count++;
  s[j]='\0';
  printf("frequency of %c is %d" ,s[i],count);
  }
 }
}
 

