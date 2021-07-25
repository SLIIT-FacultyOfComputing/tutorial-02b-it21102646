#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}long nCr(int n,int r)
{
  int a,b,c;
  long fac_a=1,fac_b=1,fac_c=1;

  for(a=n;a>=1;a--)
  {
    fac_a=fac_a*a;
  }
  for(b=r;b>=1;b--)
  {
    fac_b=fac_b*b;
  }
  for(c=(n-r);c>=1;c--)
  {
    fac_c=fac_c*c;
  }
  return fac_a/(fac_b*fac_c);
}

 /*- Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

/*#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}*/

