#include "myMath.h"
#define E 2.71828;

double Exp(int x){
  double sum = E;

  for (int i = 1; i < x; i++) {
    sum = sum*E;
  }
  return sum;
}
double Pow(double x,int y){
  double sum = x;

  for (int i = 1; i < y; i++) {
    sum = sum*x;
  }
  return sum;
}
