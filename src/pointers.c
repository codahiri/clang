#include <stdio.h>
#include <string.h>

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

  int son2 = 5;
  int* ptr_son2 = &son2;
  printf("%i\n", *ptr_son2);
  *ptr_son2 = 200;
  printf("%i\n", son2);

  // Pointer Arithmetic
  int* p_a;
  printf("%p\n", p_a);
  printf("%p\n", p_a+2);

  double* ptr5;
  printf("%p\n", ptr5);
  // Code for Checkpoint 1 goes here:
  ptr5 += 5;
  printf("%p\n", ptr5);
  // Code for Checkpoint 2 goes here:  
  ptr5 -= 4;
  printf("%p\n", ptr5);

  // Pointers & Arrays
  int arr6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // Code for Checkpoint 1 goes here.
  int* ptr6 = &arr6[9];
  // Code for Checkpoint 2 goes here.
  for(int i = 0; i<10; i++){
    printf("%i\n", *ptr6);
    ptr6--;
  }
  // Code for Checkpoint 3 goes here.
  char* ptr7 = &s[0];
  // Code for Checkpoint 4 goes here.
  for(int j = 0; j < strlen(s); j++){
    *ptr7 = '#';
    ptr7++;
  }
  printf("%s\n", s);  
}