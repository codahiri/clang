#include <stdio.h>

int main(){

// Mathematical Operations
  // Variables set for you, do not change here
  int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
  booksSold = 100 + 200;
  totalSalesValue = booksSold * bookCost;
  totalSalesValue = totalSalesValue / 2;
  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);

  // Modulo
  int endingDayOfWeek = 0;
  int daysThatPass = 3;
  int daysInWeek = 7;
  endingDayOfWeek = daysThatPass % daysInWeek;
  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);

  // Increment and Decrement
  int i = 13;
  int d = 10;
  d--;
  i++;

  printf("i = %d\n", i);
  printf("d = %d\n", d);

  // Assignment
  int timesServerCrashed = 5;
  double losses = 500.95;
  losses *= timesServerCrashed;
  losses /= 2;
  printf("Total losses $%.2f\n", losses);

  // Comparisons
  int c = 5;
  int m = 42;
  if (c < m)
  {
    printf("%d less %d\n", c, m);
  }

  // Logical Operators
  int a = 2;
  int b = 3;
  if (a == b && a == 2) {
    printf("both are true\n");
  }
  if (a == b || a == 2) {
    printf("one or both are true\n");
  }
  if (!(a == b)) {
    printf("they are not equal\n");
  }

  // Order of Operations
  int x;
  int y;

  x = (2 + 3) * 5;
  y = 2 / (4 + 6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
  
}