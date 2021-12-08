#include <cs50.h>
#include <stdio.h>

int main(void)
{

  int n = 5;
  while (n > 0)
  {
    for (int i = 0; i < n; i++)
    {
      printf("i");
      for (int j = 0; j < n; j++)
      {
        printf("#");
      }
    }

    printf("\n");
    n--;
  }
}

// One loop prints n spaces - 1
// One loop prints 1 hash + 1
// Once second loop done print newline