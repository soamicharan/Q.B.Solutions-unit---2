#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    printf("Enter String.\n");
    char str[25];
    scanf("%s",&str);
    int a,b,c;
    a=strlen(str);
    for(b=0,c=a-1;b<a,c>=0;b++,c--)
    {
        if(str[b]!=str[c])
        {
            printf("String is not Palindrome.\n");exit(3);
        }
    }
    printf("String is Palindrome.");
    getch();
}
