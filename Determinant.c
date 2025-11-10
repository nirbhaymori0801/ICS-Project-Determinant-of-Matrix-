#include<stdio.h>
void cofactor(int mat[100][100],int temp[100][100],int p,int q,int n){
  int i=0,j=0;
  for(int r=0;r<n;r++){
    for(int c=0;c<n;c++){
      if(r!=p && c!=q){
        temp[i][j++] = mat[r][c];
        if(j == n-1){
          j = 0;
          i++;
        }
      }
    }
  }
}

int det(int mat[100][100],int n){
  if(n==1){
    return mat[0][0];
  }

  int det = 0;
  int temp[100][100];
  int sign = 1;

  for(int f=0;f<n;f++){
    cofactor(mat,temp,0,f,n);
    det += sign * mat[0][f] * det(temp,n - 1);
    sign *= (-1);
  }
  return det;
}

void inverse(int mat[100][100],int n);

int rank(int mat[100][100],int n);//complete the function here

int main(){
  int mat[100][100],n;
  printf("Write the number of rows/columns of square matrix:");
  scanf("%d",&n);
  printf("Write the elements of matrix:\n");
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&mat[i][j]);
  printf("\n\n");

  printf("Options:\n\n");
  
  printf("1.Find the determinant of matrix\n");
  printf("2.Find the inverse of the following matrix:\n");
  printf("3.Find the rank of the matrix function:\n");

  printf("Select the option:");
  int opt;
  scanf("%d",&opt);
  switch(opt){
    case 1:
           printf("The determinant of the matrix is %d\n",det(mat,n));
           break;
    case 2:
           printf("The inverse matrix of the above matrix is:\n");
           //print the inverse matrix here...
           break;
    case 3:
           printf("The rank of the matrix is %d\n");
           ///Rank the matrix and put it here
           break;
    default:
           printf("Invalid option\n");
  }


}
