#include<stdio.h>
#include<conio.h>
#define MINIMUM3(a,b,c) ((a)<(b)&&(a)<(c)?(a):((b)<(c)&&(b)<(a)?(b):(c)))
int main()
{
    int num[3],a,b;
    printf("Enter Three Numbers.\n");
    for(a=0;a<3;a++)
        scanf("%d",&num[a]);
    b=MINIMUM3(num[0],num[1],num[2]);
    printf("Minimum Number = %d",b);
    getch();
}
