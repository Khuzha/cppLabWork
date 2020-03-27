#include "ft.h"

int factorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  return num * factorial(num - 1);
}

float calc(float x, int degree)
{
  return (pow(x, degree) / factorial(degree));
}