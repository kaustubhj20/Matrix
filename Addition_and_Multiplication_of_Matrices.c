#include<stdio.h>
int main()
{
  int n,m;
  printf("Enter number of rows and number of columns :");
  scanf("%d %d",&n,&m);
  float a[n][m],b[n][m],result[n][m];
  printf("Enter elements of 1st matrix\n");
for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < m; ++j)
{
printf("Enter a%d%d:\n", i + 1, j + 1);
scanf("%f", &a[i][j]);
}
}
printf("Enter elements of 2nd matrix\n");
for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < m; ++j)
{
printf("Enter b%d%d:\n", i + 1, j + 1);
scanf("%f", &b[i][j]);
}
}
for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < m; ++j)
{
result[i][j] = a[i][j] + b[i][j];
}
}

printf("\nSum Of Matrix:\n");
for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < m; ++j)
{
printf("%.1f\t", result[i][j]);
if(j==(m-1))
{
  printf("\n");
  }
}
}

for (int i = 0; i < n; ++i)
 {
   for (int j = 0; j < m; ++j)
{
result[i][j] = a[i][j] * b[i][j];
}
 }

printf("\nProduct Of Matrix:\n");
for (int i = 0; i < n; ++i)

 { 
   for (int j = 0; j < m; ++j)
{
printf("%.1f\t", result[i][j]);
if(j==(m-1))
{
  printf("\n");
  }
}
 }
return 0;
}
