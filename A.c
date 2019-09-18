#include<stdio.h> 
int n,x;
int a[23],final[1000],ans=0;
int max(int x,int y){
    return (x>y)?x:y;
} 
int f() 
{ 
   int i,j; 
   int A[n+1][x+1];
   for(i=0;i<=n;i++) 
   {
       for(j=0;j<=x;j++) 
       { 
            if(i==0||j==0) 
                A[i][j]=0; 
            else if(a[i-1]<= j)
                A[i][j]=max(a[i-1] + A[i-1][j-a[i-1]], A[i-1][j]); 
            else
                A[i][j] =A[i-1][j]; 
       } 
   }  
   int z=A[n][x];
   j=x; 
    for (i=n;i>0 && z>0;i--) { 
        if (z==A[i-1][j])  
            continue;         
        else{
            //printf("%d ",i);
            final[ans++]=i; 
            z=z-a[i-1]; 
            j=j-a[i-1]; 
        }  
}
printf("%d\n",ans);
for (int i = 0; i < ans; i++)
{
    printf("%d ",final[i]);
}
 
} 
int main() 
{ 
    scanf("%d%d",&n,&x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
    f();
    return 0; 
} 