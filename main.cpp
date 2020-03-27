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

  for (int degree = 4; actNum > e; degree += 2)
  {
    sum += actNum;
    actNum = calc(x, degree);
  }

  cout << "Результат (sum) = " << sum << endl;
  return 0;
}