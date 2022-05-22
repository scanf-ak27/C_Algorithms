#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100],pat[100],rep[100],ans[100];
    printf("Enter the string: \n ");
    gets(str);
    printf("Enter the pattern to be found : \n");
    gets(pat);
    printf("Enter the replacement string : \n");
    gets(rep);
    int i,c=0,j,m,k,flag=0;
    i=c=m=j=0;
while (str[c]!='\0')
{
    if(str[m]==pat[i])
    {
        i++;
        m++;
     if(pat[i]=='\0')
     {
         for(k=0;rep[k]!='\0';k++,j++)
         {               //REPLACING CODE-------//
         {               //REPLACING CODE-------//
             ans[j]=rep[k];
             flag++;
         }
         c=m;
     }
    }
    else
    {
        ans[j]=str[c];
        j++;c++;m=c;
    }
}
if (flag==0)
{
    printf("Pattern doesn't exist");
}
else
{
    ans[j]='\0';
    printf("Replaced string is %s\n",ans);
}
}