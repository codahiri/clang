#include <stdio.h>

int main(){

	// Pointers
	//int* ptr; // Pointer to an int
	//int *ptr; // Same as above but different style.

	int x; // Create an int variable
	int* ptr = &x; // Pointer to that int (we'll dive into what "&" means in the coming exercises)
	printf("%p\n", ptr); // %p needed to instruct printf() that ptr is of type pointer
	int* ptr2;
	printf("%p\n", ptr2);

	// Checkpoint 1 code goes here.
  double dblVar;
  // Checkpoint 2 code goes here.
  double* dblPtr = &dblVar;
  // Checkpoint 3 code goes here.
  printf("%p\n", dblPtr);

  int x2 = 9;
  int* ptr3 = &x2;
  printf("%p\n", &x2);
  printf("%p\n", ptr3);

  int y = 17;
  ptr3 = &y;
  printf("%p\n", ptr3);

  double g = 9.81;
  double pi = 3.14;
  
  // Checkpoint 1 code goes here.
  double* dblPtr2 = &g;
  // Checkpoint 2 code goes here.
  printf("%p\n", dblPtr2);
  // Checkpoint 3 code goes here.
  dblPtr2 = &pi;
  printf("%p\n", dblPtr2);

  // The Dereference Operator
  int son = 4;
  int* ptr_son = &son;
  int son_ptr = *ptr_son;
  printf("%i\n", son_ptr);
}