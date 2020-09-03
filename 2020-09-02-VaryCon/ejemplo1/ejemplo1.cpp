#include <iostream>

int main(int argc, char **argv)
{
//tipos primitivos
  double x = -9.6e3; //64 bits, 8 bytes, 1.0e-16, 2¹⁰²⁴ \simeq (10³⁰⁷)
  long double y = -9.6e3; // >64 bits
  std::cout << sizeof(bool) << std::endl;

  return 0;
}
