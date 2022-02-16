#include <stdio.h>
/*
	Complete main() to print the following messages:

    1. If the myNumber variable local to main() is less than or equal to 50 the output will be:
	    39
	    This is my global message!

    2. If the myNumber variable local to main() is greater than 50 the output will be:
	    500
	    This is my local message!
*/
// Write your code below...

char* myMessage = "This is my global message!";

void myFunc() {
  char* myMessage = "This is my local message!";
  printf("%s\n", myMessage);
}

int main() {
  // You can change `myNumber` to be larger than `50`
  int myNumber = 39;

  if (myNumber <= 50) {
  	printf("%d\n", myNumber);
  	printf("%s\n", myMessage);
  } else {
    int myNumber = 500;
    printf("%d\n", myNumber);
    myFunc();
  }
}