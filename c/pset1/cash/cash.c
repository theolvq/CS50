#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  float change = get_float("Changed owed: ");
  
  while(change < 0) 
  {
    change = get_float("Must be a positive number, please enter the amount of change owed: ");
  }
  
  int cents = change * 100;
  int counter = 0;

    while(cents > 25) 
    {
      cents -= 25;
      counter++;
    }
    while(cents > 10)
    {
      cents -= 10;
      counter++;

    }
    while(cents > 5)
    {
      cents -= 5;
      counter++;

    }
    while(cents > 0)
    {
      cents -= 1;
      counter++;
    }
  
  printf("%i\n", counter);
}