#include <stdio.h>
#include "myMath.h"

int main(){

  double userNumber;
  printf("Please insert real number: ");
  scanf("%lf/n" ,&userNumber);

  //f(x) = e^x + x^3 -2
  double function1 = sub(add(Exp((int)userNumber),Pow(userNumber,3)),2);
  printf("The vulve of f(x) = e^x + x^3 -2  at the point %.4lf is:%.4lf\n" ,userNumber,function1);

  //f(x) = 3*x +2*x^2
  double function2 = add(mul(userNumber,3),mul(Pow(userNumber,2),2));
  printf("The vulve of f(x) = 3*x +2*x^2 at the point %.4lf is:%.4lf\n" ,userNumber,function2);

  //f(x) = (4*x^3)/5-2*x
  double function3 =  sub(div(mul(4,Pow(userNumber,3)),5),mul(userNumber,2));
  printf("The vulve of f(x) = (4*x^3)/5-2*x at the point %.4lf is:%.4lf\n" ,userNumber,function3);

  return 0;
}
