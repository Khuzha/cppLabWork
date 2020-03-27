#include "ft.h"

int main()
{
  float e;
  cout << "Введите точность е: ";
  cin >> e;
  float x;
  cout << "Введите значение x: ";
  cin >> x;
  cout << "Принял.\n";
  float sum = 1;
  float actNum = calc(x, 2);

  cout << "kek";
  for (int degree = 4; actNum > e; degree += 2)
  {
    sum += actNum;
    cout << "sum = " << sum << ", actNum = " << actNum;
    actNum = calc(x, degree);
  }
}