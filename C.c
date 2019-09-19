#include<stdio.h>
#include<string.h>
int replacement(int val,int alpha[])
{
    if(alpha[val]==val)
    return val;
    else
    {
        replacement(alpha[val],alpha);
    }
    
}
int main()
{
    char s[100000];
    int alpha[26];
    int m,i;
    for(i=0;i<26;i++)
    {
        alpha[i]=i;
    }
    scanf("%s",s);
    int len = strlen(s);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        //scanf("%[^\n]s",a);
        char x,y;
        int x1,y1;
        scanf("\n%c %c",&x,&y);
        x1 = (x-'a');
        y1 = (y-'a');
        alpha[x1]=y1;
        //printf("%d %d",x1,alpha[x1]);
    }
    for(i=0;i<len;i++)
    {
        int val = s[i]-'a';
        s[i]=(char)(replacement(val,alpha)+'a');
    }
    s[len]='\0';
    printf("%s",s);
    return 0;

}