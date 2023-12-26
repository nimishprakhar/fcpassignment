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
printf("first matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("second matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}


return 0;

}
