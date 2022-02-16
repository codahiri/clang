#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int);

void printMyFavoriteAnimal(void){
  printf("My favorite animal is a Dog\n");
}

int numSqrt(int, int);
void str3(void);

int getRandomNumber(int maxNumber) {
  int random1000 = rand() % maxNumber + 1;
  return random1000;
}

void myPtr(int* a){
	*a = *a + 2;
	printf("a inside myPtr(): %d\n", *a);
}

void incrementAge(int* agePointer){
  *agePointer = *agePointer + 1;
}

int main(){
	printf("hi\n");
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandomNumber(100);
  printf("My random number is: %d\n", randomNumber);
	
	int age = 24;
  incrementAge(&age);
  printf("%d\n", age);

	printMyFavoriteAnimal();

	str3();  

  int myF = numSqrt(2, 5);
  printf("%d\n", myF);

  int a = 10;
  int* aPtr = &a;
  printf("a 2 in main(): %d\n", a);
  myPtr(aPtr);
  printf("a 3 in main(): %d\n", a);
}

void str3(void){
	char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("%s\n", str3);
}

int numSqrt(int num1, int num2){
	return num1 * num2;
}