#include <iostream>

// declare using namespace std for output input to make code readabla
using namespace std;

int main() {
  double pesos, reais, soles, dollars;

  // 4. Question calculator
  cout << "Enter number of Colombian Pesos: ";
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: ";
  cin >> reais;

  cout << "Enter number of Peruvian Soles: ";
  cin >> soles;

  /* Formula to Calculate Pesos, Reais, Soles to usd 
  1 Pesos = 0.018;
  1 reais = 0.20;
  1 soles = 0.27;
  */
  
  // 8. Initialize dollar Formula to combine all curency in dollar (pesos, reais, sole)
  dollars = ((0.018 * pesos) + (0.20 * reais) + (0.27 * soles));

  cout << "US Dollars = $"<< dollars;
  return 0;
}
