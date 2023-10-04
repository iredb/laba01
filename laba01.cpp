/****************************************************
 *  Автор:    Струк С.А.                            *
 *  Дата:     20.09.2023                            *
 *  Название: Программирование линейных алгоритмов. *
 * https://onlinegdb.com/Hds9Rq0mXv                 *
 ****************************************************/
 
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  const double R = 8.3144;
  double P2, epsilon, A, T1, P1, T2, n;

  /*T1 = 320;
  P1 = 0.981 * pow(10, 5);
  T2 = 973;
  n = 1.36;*/
  cout << "T1 = ";
  cin >> T1;
  cout << endl;
  cout << "P1 = ";
  cin >> P1;
  cout << endl;
  cout "T2 = ";
  cin >> T2;
  cout << endl;
  cout << "n = ";
  cin >> n;
  cout << endl;
  
  P2 = P1 * pow( (T2 / T1), (n / (n - 1) ) );
  epsilon = pow( (T2 / T1), (1 / (n - 1) ) );
  A = ( (R * T1) / (n - 1) ) * ( (T2 / T1) - 1 );
  
  cout.precision(7);
  
  cout << "P2 = " << P2 << endl 
       << "epsilon = " << epsilon << endl
       << "A = " << A << endl;

  return 0;
}
