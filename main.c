#include <stdio.h>

int main() {

   // COMPILER
   // gcc helloWorld.c -o helloWorld
   
   // VARIABLES =                Allocated space in memory to store a value.
   //                            We refer to a variable's name to acces the stored value.
   //                            That variable now behave as if it was the value it contains.
   //                            BUT we need to declare what type of data we are strong.
   
   //int a;                        // declortion
   //a = 12;                       // initialization
   //int b = 24;                   // declortion and initialization
//
   //int age = 17;                 // integer
   //float gpa = 2.05;             // floatingpoint number
   //char grade = 'C';             // single character
   //char name[] = "Ilosrim";      // array of characters
//
   //printf("Hello %s\n", name);
   //printf("You are %d years old\n", age);
   //printf("Your averge grade is %c\n", grade);
   //printf("Your gpa is %f", gpa);
   //printf("gcc file1 -o file2 - bu terminalda fileni compiyatsiya qilish");

     // Fix the missing data types
  int studentRank;
  float studentFeeTotal;
  char studentGradeLetter;
  
   // No need to make any changes below here, use these as a hint to how each variable above should be declared
   studentRank = 1;
   studentFeeTotal = 100.56;
   studentGradeLetter = 'A';

   printf("Student's Rank in class: %dst\n", studentRank);
   printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
   printf("Student's Grade: %c\n", studentGradeLetter);

}