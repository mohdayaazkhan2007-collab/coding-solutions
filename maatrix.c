#include<stdio.h>
int main()
{
int a[2][2],b[2][2], i, j;
printf("\Enter elements of 1st matrix:\n");
for(i=0; i<2;++i)
{
for (j=0; j<2; ++j)
{
scanf("%d", &a[i][j]);
}
}
printf("\n Enter elements of 2nd matrix:\n");
for(i=0; i<2; ++i)
{
for (j=0; j<2; ++j)
{
    scanf("%d", &b[i][j]);
}
}
printf("\n elements of 1st matrix :\n");
for(i=0; i<2; ++i)
{
    for (j=0; j<2;++j)
        {
        printf("%d",a[i][j]);
}
}
printf("\n elements of 2nd matrix : \n");
for(i=0; i<2; ++i)
{
    for(j=0; j<2; ++j)
    {
        printf("%d", b[i][j]);
    }
    printf("\n");
}
return 0;
}
