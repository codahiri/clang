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


}