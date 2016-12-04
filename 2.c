#include<stdio.h>
#include<conio.h>
int main()
{
     int n,a,*arr,b,temp;
    printf("Enter Number of Entries.\n");
     scanf("%d",&n);
     arr=(int *)malloc(n*sizeof(int));
    printf("Enter Numbers.\n");
    for(a=0;a<n;a++)
    scanf("%d",&arr[a]);

    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n-a-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
    printf("Sorted Array.\n");
    for(a=0;a<n;a++)
        printf("%d\n",arr[a]);
printf("Minimum Number = %d\n",arr[0]);
printf("Maximum Number = %d\n",arr[n-1]);
printf("Difference = %d\n",arr[n-1]-arr[0]);
        getch();
}
