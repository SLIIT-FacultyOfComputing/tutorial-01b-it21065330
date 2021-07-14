/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int n = 0 , counter = 1 , sum = 0;

  printf("Enter a number "); //getUser input
  scanf("%d",&n); // insert userinput to variable

  while(counter <= n) // check counter <=n
  {
    sum +=counter; // calculate sum = sum + counter

    counter++; // increse counter value by one  counter = counter + 1
  }


  printf("Sum is %d ",sum); // display the sum of the numbers from 1 to unser input number



  return 0;
}

