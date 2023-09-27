/****************************************************
 *  Автор:    Струк С.А.                            *
 *  Дата:     20.09.2023                            *
 *  Название: Программирование линейных алгоритмов. *
 * https://onlinegdb.com/Hds9Rq0mXv                 *
 ****************************************************/
 
#include <iostream>
#include <math.h>

using namespace std;

int main(){
  double P2, Epsilon, A;

  double T1 = 320;
  double P1 = 0.981 * pow(10, 5);
  double T2 = 973;
  double n = 1.36;
  const double R = 8.3144;
  
  P2 = P1 * pow( (T2 / T1), (n / (n - 1) ) );
  Epsilon = pow( (T2 / T1), (1 / (n - 1) ) );
  A =( (R * T1) / (n - 1) ) * ( (T2 / T1) - 1 );
  
  cout.precision(6);
  cout << fixed;
  
  cout << P2 << endl;
  cout << Epsilon << endl;
  cout << A << endl;

  cout << "Что-то изменилось!";

  return 0;
}
