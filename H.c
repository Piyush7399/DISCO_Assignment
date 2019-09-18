#include<stdio.h>
#include<string.h>
int palindromechecker(char *a,int start,int len)
{
    int h=start+len-1,i;
    for(i=start;i<(start+len);i++)
    {
        if(a[i]!=a[h--])
        break;
    }
    if(i==(start+len))
    {
        char final[len];
        for(int j=0;j<len;j++)
        final[j]=a[start++];
        final[len]='\0';
        printf("%s ",final);
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void check(char *s,int len)
{
    int l = 2*len,i,flag=0;
    char s_new[l];
    for(i=0;i<l;i++)
    {
        if(i<len)
        s_new[i]=s[i];
        else
        {
            s_new[i]=s[i-len];
        }        
    }
    s_new[l]='\0';
    for(i=0;i<l&&flag==0;i++)
    {
        flag = palindromechecker(s_new,i,len);
    }
}
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
/*void check(char *a,int len)
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

}}*/