#include <stdio.h>
int main()
{   int a[3][3],b[3][3];
int i,j;
printf("Enter matrix one\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter element %d %d of first matrix",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Enter matrix two\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter element %d %d of second matrix",i,j);   
scanf("%d",&b[i][j]);
}
}
int c[3][3];
printf("adjoint of a matrix\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       c[i][j]=a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3];
       printf("%d ",c[i][j]);
    }

    printf("\n");
}
//determinant
float determinant;

determinant= a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
printf("determinant of matrix a");
printf("\n");
printf("%f",determinant);
printf("\n");


//inverse of matrix
int I[3][3];
printf("inverse of matix c");
printf("\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       I[i][j]=(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3])/determinant;
       printf("%f ",I[i][j]);
    }

    printf("\n");
}



  }
