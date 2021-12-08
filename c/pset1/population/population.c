#include <cs50.h>
#include <stdio.h>

int main(void)
{
  
// Prompt for start size
  int start = get_int("How many llamas do we start with? ");

  while(start < 9 )
  {
    start = get_int("Sorry, 9 is the minimum, please choose another number. ");
  }
  // Prompt for end size
  int end = get_int("And how many are there at the end? ");
  
  while (end <= start)
  {  
    end = get_int("Sorry, it's gotta be more than the start population, please choose another number. ");
  }

  // Calculate number of years until we reach threshold
  int pop = start;
  int years = 0;

  while (pop < end)
  {
    pop += (pop / 3) - (pop / 4);
    years++;
  };

// Print number of years
printf("Years: %i\n", years);

}