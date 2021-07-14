/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int noOne, int noTwo);
int maximum(int noOne, int noTwo);
int multiply(int noOne, int noTwo);


int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int noOne, int noTwo)
{
  if(noOne < noTwo) // check minimun number
    return noOne; // if number one is minimun number then return it
  else
    return noTwo; // else number two is minimun number then return it
}
int maximum(int noOne, int noTwo)
{
  if(noOne > noTwo) // check maximum number
    return noOne; // if number one is maximum number then return it
  else
    return noTwo;// else number two is maximum number then return it
}
int multiply(int noOne, int noTwo)
{
 return noOne*noTwo; // multiply two numbers and return the answer
}
