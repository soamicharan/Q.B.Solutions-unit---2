#include<stdio.h>
#include<conio.h>
#include<string.h>
void strslen(char[],char[]);
void concatstr(char[],char[]);
void revstr(char[],char[]);
int main()
{
    char str1[25],str2[25];
    printf("Enter String 1 and String 2.\n");
    scanf("%s %s",&str1,&str2);
    printf("Press 1 - Report String lengths.\n2 - Concatenate strings and print out the concatenated strings.\n3 - Print strings in reverse order.\n");
    int in;
    scanf("%d",&in);
    switch(in)
    {
        case 1:strslen(str1,str2);return 1;
        case 2:concatstr(str1,str2);return 1;
        case 3:revstr(str1,str2);  return 1;

        default:printf("You entered wrong input.\n");return 0;
    }
}
void strslen(char a[],char b[])
{
    int x,y;
    x=strlen(a);y=strlen(b);
    printf("Length of string 1 = %d.\nLength of string 2 = %d.\n",x,y);

}
void concatstr(char a[],char b[])
{
    strcat(a,b);
    printf("Concatenated Strings = %s",a);
}
void revstr(char a[],char b[])
{
    printf("Reversed Strings - \n%s\n%s",strrev(a),strrev(b));
}
