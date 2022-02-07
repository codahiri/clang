#include <stdio.h>

void function();

int main() {
   
   // VARIABLES =                Allocated space in memory to store a value.
   //                            We refer to a variable's name to acces the stored value.
   //                            That variable now behave as if it was the value it contains.
   //                            BUT we need to declare what type of data we are strong.
   
   int a;                        // declortion
   a = 12;                       // initialization
   int b = 24;                   // declortion and initialization

   int age = 17;                 // integer
   float gpa = 2.05;             // floatingpoint number
   char grade = 'C';             // single character
   char name[] = "Ilosrim";      // array of characters

   printf("Hello %s\n", name);
   printf("You are %d years old\n", age);
   printf("Your averge grade is %c\n", grade);
   printf("Your gpa is %f", gpa);

}