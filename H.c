#include<stdio.h>
#include<string.h>
void check(char *a,int len)
{
    int i,h=len-1;
    for(i=0;i<len;i++)
    {
        if(a[i]!=a[h--])
        break;
    }
    if(i==len)
    {
        printf("%s ",a);
    }
    else
    {
            int k=0;
    char s[len];
    for(i=0;i<len-1;i++)
    {
        if(a[i]==a[i+1])
        {
            k=i+1;
            break;
        }
    }
    int cnt = k,t=0;
    for(i=0;i<len-cnt;i++)
    {
        s[i]=a[k++];
    }
    for(i=len-cnt;i<len;i++)
    {
        s[i]=a[t++];
    }
    s[len]='\0';

    h=len-1;
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[h--])
        break;
    }
    if(i==len)
    {
        printf("%s ",s);
    }

}}
int main()
{
    char str[1000];
    char s[1000];
    int i=0,k=0;
    scanf("%[^\n]s",str);
    int len = strlen(str);
    for(i=0,k=0;i<=len;i++)
    {
        if(str[i]!=' '&&str[i]!='\0')
        {
            s[k++]=str[i];
          //  printf("%c",s[k-1]);
        }
        else
        {
            s[k]='\0';
            int l = strlen(s);
            check(s,l);
            //printf("%s %d\n",s,l);
            k=0;
        }
                 
    }

    return 0;
}