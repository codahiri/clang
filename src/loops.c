#include <stdio.h>

int main(){
  int pin = 0;
  int tries = 0;

  printf("BANK OF CODECADEMY:\n");
  printf("Enter your pin: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 1234 && tries < 3)
  {
    printf("Enter your pin: ");
    scanf("%d", &pin);
    tries++;
  }
  if(pin == 1234){
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }

  int i = 9;
  int square = 0;

  // Write a while loop here:
  while (i >= 0 ){
    printf("%d\t%d\n", i, i*i);
    i--;
  }

  // do-while loop
  int j = 11;

  do {
    printf("%d\n", j);
    j--;
  } while (j >= 0);
  
  // for loop
  for( int k = 99; k >=0; k--){
    printf("%d bottles of pop on the wall.\n", k);
    printf("Take one down and pass it around.\n");
    printf("%d bottles of pop on the wall.\n", k - 1);
  }

  int learning = 1;
  int cont;

  while (learning++ < 10) {

    printf("Congratulations! Are you ready to continue learning in the next lesson?\n");
    printf("1 - Yes\t2 - No\n");

    scanf("%d", &cont);

    if (cont == 1) {

      printf("Awesome! Let's break out and move forward!\n");
      break;

    } else {

      printf("Okay! Keep practicing! And remember to take breaks!\n");

    }

  }
}