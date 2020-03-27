#include "ft.h"

int factorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  cout << "num = " << num;
  return factorial(num * factorial(num - 1));
}

float calc(float x, int degree)
{
  return (pow(x, degree) / factorial(degree));
}