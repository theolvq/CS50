#include <cs50.h>
#include <stdio.h>

int main(void)
{

  int n = get_int("Height: ");

  while (n < 1 || n > 25)
  {
    n = get_int("Please enter a value between 1 and 25: ");
  }

  for (int i = 0; i < n; i++)
  {
    
    for (int j = 0; j <= n - i; j++)
    {
      printf(" ");
    }

    for (int k = 0; k <= i; k++)
    {
      printf("#");
    }

    printf(" ");

    for (int l = 0; l <= i; l++)
    {
      printf("#");
    }

    printf("\n");
  }
}

// One loop prints n spaces - 1
// One loop prints 1 hash + 1
// Once second loop done print newline