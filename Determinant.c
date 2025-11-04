#include<stdio.h>
int main(){
  int mat[10000][10000],n;
  printf("Write the number of rows/columns of square matrix:");
  scanf("%d",&n);
  printf("Write the elements of matrix:\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&mat[i][j]);

  
  
}
