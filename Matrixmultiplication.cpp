//problem link: https://practice.geeksforgeeks.org/problems/multiply-matrices/1#

void multiply(int A[][100], int B[][100], int C[][100], int n)
{
      //add code here.
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              C[i][j]=0;
              for(int k=0;k<n;k++){
                  C[i][j]+=A[i][k]*B[k][j];
              }
          }
      }
}