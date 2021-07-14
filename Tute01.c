/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int numberOne,numberTwo;
  float avg = 0 , sum = 0;


  printf("Enter first number : "); //get first number from user
  scanf("%d",&numberOne);

  printf("Enter second number : "); //get second number form user
  scanf("%d",&numberTwo);

  sum = numberOne + numberTwo; //calculate the sum

  avg = sum/2; // average = sum/ 2


  printf(" Average = %.2f ", avg); // display average 

  return 0;
}

