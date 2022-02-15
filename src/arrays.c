#include <stdio.h>

int main(){

	// ARRAYS
	// Creating and Initializing Arrays

	// int age[4];
	int age[4] = {7,15,20,23};
	printf("%d\n", age);

	// Checkpoint 1 code goes here.
  double q[5];
  // Checkpoint 2 code goes here.
  int evens[5] = {2, 4, 6, 8, 10};
  printf("%d\n", evens);

  // Array Access and Element Modification
  int arr[] = {1,2,3,4,5};
  arr[2] = 6;
  int i = arr[2];
  printf("%i\n", i);

  // Looping Through Arrays
  int arr2[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28};
  int idx = 0;
  while(i < 20){
  	printf("%i\n", arr2[i]);
  	i++;
  }

  for (int i = 0; i < 20; i++)
  {
  	printf("%i\n", arr2[i]);
  }

  int arr3[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr4[100];
    
  // Code for Checkpoint 1 goes here
    int x = 0;
    while(x < 20){
      // printf("%i\n", arr[i]);
      x++;
    }
  // Code for Checkpoint 2 goes here
  for(int i = 0; i < 100; i++){
    arr4[i] = i+4;
  }

  // Length of Array Using sizeof()
  for(int i = 0; i < sizeof(arr4)/sizeof(int); i++){
  	printf("%i\n", arr4[i]);
  }

  // Multidimensional Arrays
  // Element Access in Multidimensional Arrays
  int mat[][3] = {{1,2,3}, {1,2,3}};
  // printf("%d\n", mat[0][1]);
  for(int i = 0; i < sizeof(mat)/sizeof(mat[0]); i++){
  	for(int j = 0; j < sizeof(mat[0])/sizeof(int); j++){
  		int num = mat[i][j];
  		printf("%i\n", num);
  	}
  }

   // Checkpoint 1 code goes here.
  int arr5[9][9];
  // Checkpoint 2 code goes here.  
  int matrix[3][3] = {{2,9,11}, {3,1,4}, {8,3,1}};

  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Checkpoint 1 code goes here.
  printf("%d\n", matrix[3][1]);
  // Checkpoint 2 code goes here.
  int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
  int columnDimension = sizeof(matrix[0])/sizeof(int);

  for(int i = 0; i < rowDimension; i++){
    for(int j = 0; j < columnDimension; j++){
      sum += matrix[i][j];
    }
  }

}