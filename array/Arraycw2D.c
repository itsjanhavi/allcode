//(1) 
/*#include<stdio.h>
int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0; 
}*/
/*#include<stdio.h>
int main(){
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d ",&arr[i][j]);
    }
  }
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0

} */
//(3)
/*#include<stdio.h>
int main(){
 int r;
 printf("enter the number of rows : ");
 scanf("%d",&r);
 
 int c;
 printf("enter the number of colums :");
 scanf("%d",&c);
 
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
  } */
  
  // (4) write a program to store roll number and marks obtained by 4 students side by side in a matrik.
/*#include<stdio.h>
int main(){
 int r;
 printf("enter the number of rows : ");
 scanf("%d",&r);
 
 int c;
 printf("enter the number of colums :");
 scanf("%d",&c);
 
  int arr[r][c];
  printf("enter the roll number and marks:\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\nmatrik:\n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
  } */
//(5) write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns:
 /*#include<stdio.h>
 int main(){
   int r;
   printf("enter the rows number:");
   scanf("%d",&r);
   
   int c;
   printf("enter the columns number :");
   scanf("%d" ,&c);
   int arr[r][c];
   
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
     }  
   }
   printf("matrik:\n");
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
      printf("%d ",arr[i][j]);
     }
   
   printf("\n");
   }
   return 0;
 }  */
 //(6) write a program to add two matrices .
 /*#include<stdio.h>
 int main(){
 int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int b[3][3]={{6,7,8},{9,10,6},{7,8,9}};
 int res[3][3];
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         res[i][j]=a[i][j]+b[i][j];
      }
  }
  //printing the result 
  printf("matrix addition result :\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       printf("%d ",res[i][j]);
    }
    printf("\n");
  }
  return 0;
 } */
 //(7) write a program to add two matrices and user n number 
/* #include<stdio.h>
 int main(){
   int r;
   printf("enter the rows number:");
   scanf("%d",&r);
   
   int c;
   printf("enter the columns number :");
   scanf("%d" ,&c);
   int a [r][c];
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
     }  
   } 
   printf("\n");
   int b [r][c];
   for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
      scanf("%d",&b[i][j]);
     }  
   } 
   int res[r][c];
   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         res[i][j]=a[i][j]+b[i][j];
      }
  }
  //printing the result 
  printf("matrix addition result :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       printf("%d ",res[i][j]);
    }
    printf("\n");
  }
  return 0;
 } */
 // write a progeam to add two matrices do it without using extry matrix ;
  
// find the sum of a given matrix of n x m.
/* #include<stdio.h>
 int main(){
   int n;
   printf("enter the rows number:");
   scanf("%d",&n);
   
   int m;
   printf("enter the columns number :");
   scanf("%d" ,&m);
   int a [n][m];
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      scanf("%d",&a[i][j]);
     }  
   } 
  printf("enter the elements\n");
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      printf("%d ",a[i][j]);
     }
     printf("\n");
   }
   int sum = 0;
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
      sum += a[i][j];
     }
   }
     printf("sum of matrix :%d ",sum);
   
   return 0;
 } */
 // find out the max doments & min doments in a 2D array.
   
/*#included<stdio.h>
int main(){
//1 2
//3 4
//5 6
   int a[3][2]={(1,2)(3,4)(5,6)};
   // 1 2 3 4
   // 5 6 7 8
   int b[2][4]={(1,2,3,4)(5,6,7,8)};
   int res[3][4];
   //multipiying
   for(int i=0;i<3;i++){
      for(int 
   }
} */
#include<stdio.h>
int main(){
  int m,n;
  printf("enter the rows of 1 st matrix:");
  scanf("%d",&m);
  printf("enter the colums of 1 st matrix:");
  scanf("%d",&n);
  int a[m][n];
  //input the first matrix
  printf("\nenter the 1st matrix:");
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
          scanf("%d",&a[i][j]);
    }
        }
   //   2nd matrix order 
   int p,q;
   printf("enter the row of 2 st matrix :");
   scanf("%d",&p);
   printf("enter the colums 2 st matrix:");
   scanf("%d",&q);
   int b[p][q];
   //input for the second matrix
   printf("\nenter the 2 st matrix:"); 
   for(int i=0;i<p;i++){
      for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
      }
   } 
   // check 
   if(n!=p){
    printf("the matroces cannot be multiplies");
   }
   else{
    // multiplication
    int res[m][q];
    for{int i=0;i<n;i++){
       res[i][j]
    }
   }
      
}
  
  
  
  
  
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
   
