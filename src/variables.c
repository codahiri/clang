#include <stdio.h>

int main(){

   int numOfBooks = 150;
   char favLetter = 'M';
   char favDigit = '8';
   double costOfCandyBar = 5.5;

   printf("Number of books: %d\n", numOfBooks);
   printf("Your Favorite Letter is: %c\n", favLetter);
   printf("Your Favorite Digit is: %c\n", favDigit);
   printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

   // Modify this variable value, start low and increase until something odd appears in the results
  int numOfLoops = 100;

  // Please do not modify anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

// If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

  // These varaibles were created and had a starting value for you, no need to change
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;
  // Update the movie review score here
  movieVersionReview = 'C';

  // Update the ticket price here
  ticketPrice = bookPrice;

  // No need to change below here
  printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);

  // Casting Types
  double testScore = 55.9;
  int displayScore = 0;
  displayScore = (int)testScore;
  printf("Great work, you got a %d%% on your test\n", displayScore);

  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
  targetChar = (char)sourceInt;
  targetChar = sourceDouble;

  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
  
}