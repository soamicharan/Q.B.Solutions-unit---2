#include<stdio.h>
#include<conio.h>
int main()
{
    int i1,j1,i2,j2,**mat1,**mat2,a,b,c,d,ans=0,**rmat;
    printf("Enter Dimensions of iXj of first Matrix.\n");
    scanf("%d%d",&i1,&j1);
    printf("Enter Dimensions of iXj of second Matrix.\n");
    scanf("%d%d",&i2,&j2);
    if(j1!=i2) //we checking that the no. of columns of first matrix is not equal to second matrix rows then it impossible to multiply the entered matrices
    {
        printf("Entered matrices are not possible to multiply.\n");
        exit(1);
    }
    mat1=(int *)malloc(j1*sizeof(int));
    mat2=(int *)malloc(j2*sizeof(int));
    rmat=(int *)malloc(j2*sizeof(int));
    for(a=0;a<i1;a++)
        mat1[a]=(int *)malloc(j1*sizeof(int));
    for(a=0;a<i2;a++)
        mat2[a]=(int *)malloc(j2*sizeof(int));
    for(a=0;a<i1;a++)
        rmat[a]=(int *)malloxt(j2*sizeof(int));
    printf("Enter first Matrix.\n");
    for(a=0;a<i1;a++)
    {
        for(b=0;b<j1;b++)
        {
            scanf("%d",&mat1[a][b]);
        }
    }
    printf("Enter second Matrix.\n");
     for(a=0;a<i2;a++)
    {
        for(b=0;b<j2;b++)
        {
            scanf("%d",&mat2[a][b]);
        }
    }
     for(b=0;b<j2;b++)     //this loop denotes for second matrix columns
     {
            for(c=0;c<i1;c++)  //this loop denotes the first matrix rows
            {
                for(d=0;d<j1;d++)  //this loop denotes the first matrix columns
                {
                    ans=ans+(mat1[c][d]*mat2[d][b]);   //ans contains the multiplication of two matrices value such that first matrix row is multiplied to second matrix row.
                }
                rmat[c][b]=ans;         //we assigning the ans to our final multiplied matrix
                ans=0;
            }
     }
     printf("Mulplication of matrices are-\n");
        for(a=0;a<i1;a++)
        {
            for(b=0;b<j2;b++)
            {
                printf("%d ",rmat[a][b]);
            }
            printf("\n");
        }
    free(mat1);free(mat2);free(rmat);
        getch();
}
