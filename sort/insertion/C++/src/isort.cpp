#include <stdio.h>
#include <stdlib.h>


int *isort ( int A[] )
{
  int j;
  int i;
  int key;

  for ( j=1; j<11; j++) {

    key = A[j];
    i = j - 1;

    while ( i > -1 && A[i] > key ) {
      A[i + 1] = A[i];
      i--;
    }
  A[i+1] = key;
  }
  return A;
}

int main( int argc, char *argv[] )
{
  int *sorted;
  int i;
  int A[11] = {10,8,4,6,3,1,2,9,7,5,0};

  sorted = isort(A);


  printf("( ");

  for ( i=0; i<11; i++ ) { 
    printf( "%d ", *(sorted + i));
  }

  printf(")\n");

	return 0;
}
