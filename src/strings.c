#include <stdio.h>
#include "string.h"

int main(){
	// STRINGS
	// Checkpoint 1 code goes here
  char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};
  // Checkpoint 2 code goes here
  char compCode[] = "Computer Code";
  // Checkpoint 3 code goes here      
  printf("%s\n", comp);
  printf("%s\n", compCode);

  // Character Access and Modification
  char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	char str2[] = "Hello World";
	 
	printf("%c\n", str[6]); // "%c" required to instruct printf() that it is to expect a character.
	printf("%c\n", str2[10]);

	// Character Access and Modification
	char p[] = "procezzor";
  // Checkpoint 1 code goes here
  printf("%c\n", p[2]);
  // Checkpoint 2 code goes here
  p[5] = 's';
  p[6] = 's';
  printf("%s\n", p);

  // Looping Through Strings
  int son = strlen(str2);
  printf("%d\n", son);

  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p2[] = "poolloop";  
  // Checkpoint 1 code goes here
  for(int i = 0; i < strlen(s); i++){
    s[i] = '*';
  }
  printf("%s\n", s);
  // Checkpoint 2 code goes here
  for(int j = 0; j < strlen(p2)/2; j++){
    p2[j] = '#';
  }
  printf("%s\n", p2);

  // Concatenating Strings
  char s1[] = "London";
  char s2[] = " Bridge";
  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  // Code for checkpoint 1 goes here
  strcat(s1, s2);
  int cat_num = strlen(s1);
  printf("%s\n", s1);
  printf("%d\n", cat_num);
  // Code for checkpoint 2 goes here
  strcat(n, y);
  strcat(n, c);
  printf("%s\n", n);

  // Copying Strings
  char s3[] = "ABCD";
  char s4[5]; // Empty string of five characters
  strcpy(s4, s3);    
  printf("%s", s4); // Prints: ABCD

  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan)+1; // Checkpoint 2
  char dst2[len];
  
  // Code for checkpoint 1 goes here
  strcpy(dst, src);
  printf("%s\n", dst);  
  
  // Code for checkpoint 3 goes here
  strcpy(dst2, pan);
  printf("%s", dst2);
}