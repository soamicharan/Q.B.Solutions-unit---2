#include<stdio.h>
#include<conio.h>
int fib(int, int,int);
int count=0,sum;
int main()
{
long long int n,c;
printf("Enter nth number of fibonacci series.\n");
scanf("%llu",&n);
c=fib(0,1,n);
printf("The nth fibonacci number is - %llu.\n",c);
getch();
}
int fib(int a,int b,int x)
{
if(count==x)
return(sum);
sum=a+b;
a=b;
b=sum;count++;
fib(a,b,x);
}


