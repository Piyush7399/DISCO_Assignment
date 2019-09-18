#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char t;
    t=*a;
    *a=*b;
    *b=t;
}

void permute(char *a,int l,int r)
{
    int i;
    if(l==r)
    {
        printf("%s\n",a);
    }
    else
    {
        for(i=l;i<=r;i++)
        {
            swap((a+l),(a+i));
            permute(a,l+1,r);
            swap((a+l),(a+i));
        }
    }
    
}
int main()
{
    char s[10];
    scanf("%s",s);
//    printf("%s",s);
    int n = strlen(s);
    permute(s,0,n-1);
    return 0;

}