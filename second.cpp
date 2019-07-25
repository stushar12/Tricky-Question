#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("\n Enter a string ");
gets(str);
int k=strlen(str);
int pos=0;
char temp;
for(int i=0;i<k;i++)
{
  if(str[i]=='R')
  {
    temp=str[i];
    str[i]=str[pos];
    str[pos]=temp;
      pos++;
  }
}
  for(int i=pos;i<k;i++)
  {
  if(str[i]=='G')
  {
    temp=str[i];
    str[i]=str[pos];
    str[pos]=temp;
    pos++;
  }
}
for(int i=pos;i<k;i++)
{
  if(str[i]=='B')
  {
    temp=str[i];
    str[i]=str[pos];
    str[pos]=temp;
    pos++;
  }


}
printf("\n Final Array is ");
printf("%s",str);
}
