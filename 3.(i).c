#include<stdio.h>
#include<conio.h>
int fact(int);
int a=1;
int main()
{
     int n,ans;
     printf("Enter a number to find its factorial.\n");
     scanf("%d",&n);
     ans=fact(n);
     printf("Factorial is = %d\n",ans);
        getch();
}
int fact(int x)
{
    if(x==0)
        return(a);
    a=a*x;
    fact(x-1);
}
