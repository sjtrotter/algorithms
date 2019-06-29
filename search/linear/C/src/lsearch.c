#include <stdio.h>

int A[6] = {31,41,59,26,41,58};

int lsearch ( int B[], int value )
{
  int i;

  for ( i = 0; i < 6; i++ ) {

    if ( B[i] == value ) {

      return i;
    }

  }

  return -1;
}

int main( int argc, char *argv[] )
{
  int value1 = 36;
  int value2 = 26;
  int i;
  int index1;
  int index2;

  index1 = lsearch(A, value1);
  index2 = lsearch(A, value2);

  /* print array, then indexes and values */
  printf("for array: ( ");
  for ( i=0; i<6; i++ ) { 
    printf( "%d ", *(A + i));
  }
  printf(")\n");

  printf("index of %d is A[ %d ]\n", value1, index1);
  printf("index of %d is A[ %d ]\n", value2, index2);

	return 0;
}
