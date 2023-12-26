#include <stdio.h>
int main()
{   int a[3][3],b[3][3];
int i,j;
printf("Enter matrix one\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("Enter matrix two\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}
int c[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d ",c[i][j]);
}
printf("\n");
}


return 0;

}
