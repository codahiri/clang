#include<stdio.h>
#include<stdbool.h> 

struct Person {
  char name[40];
  int age;
  bool isMerrid;
};
// Write your function below
struct Person ageOne(struct Person friend1, struct Person* friend2Pointer) {
  friend1.age += 1;
  friend2Pointer->age += 1;
  return friend1;
}

// void bottleFunction(struct Bottle b, struct Bottle* bPointer){
//   b.name = "Super Large";
//   b.maxCapacity = 100;
//   bPointer->name = "Super Small";
//   bPointer->maxCapacity = 4;    
// }

// struct Bottle getEmptyBottle(void){
//   struct Bottle b = {"My Bottle", 24, 0};
//   return b;
// }

int main(){

	// struct Person {
	// 	char firstName[25];
	// 	char lastName[40];
	// 	int age;
	// };

	// struct Person person1 = {"Ada", "Lovelace", 28};
 //  struct Person person2 = {"Marie", "Curie", 44};
 //  person2.age = 55;

  // struct Person2 person1 = {"Martin", 57};
  // struct Person2 person2 = {"Michelle", 27};
  // // Write your code below
  // struct Person2* person1Pointer = &person1;
  // struct Person2* person2Pointer = &person2;
  // (*person1Pointer).age += 1;
  // person2Pointer->age += 10;
  // printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  // printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);

  // struct Bottle b1 = {"Medium", 24, 9};
  // struct Bottle b2 = {"Large", 35, 9};
 
  // bottleFunction(b1, &b2);

  struct Person myFriend = {"Martin", 57};
  struct Person myOtherFriend = {"Michelle", 27};
  // Call your function below
  myFriend = ageOne(myFriend, &myOtherFriend);

  printf("Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
}